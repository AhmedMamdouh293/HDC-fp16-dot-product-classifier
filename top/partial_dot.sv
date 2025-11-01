// ===================================================
// partial_dot module of the HDC classification unit
// Author: Ahmed Mamdouh
// ===================================================

module partial_dot #(
    parameter int D       = 256,         // HV dimension
    parameter int WIDTH   = 256,         // Input HV width (bits)
    parameter int CENT_W  = 16,         // Class HV element width
    parameter int ACC_W  = 16,         // accumulator width (16)
    // parameter int NUM_CENT  = D/CENT_W, // number of centroids per PE
    parameter int NUM_C   = 10          // Number of classes
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  start,

    // Data inputs
    input  logic [WIDTH-1:0]         in_hv,     // 256-bit input HV slice  
    input  logic [WIDTH-1:0]         class_hv,  // Packed 16x16-bit weights
    // input  logic [$clog2(NUM_C)-1:0] class_L,   // Class Label

    // Control
    output logic                  next_cent,  // request next class slice
    output logic                  next_class,  // request next class HV
    // output logic                  next_dim,   // request next input HV slice
    output logic                  max_en,
    output logic                  max_clr,


    // Outputs
    // output logic [$clog2(NUM_C)-1:0] pred_label,
    output logic [ACC_W-1:0]      accum_dout,
    output logic                  done
);

    // Derived params
    localparam int GROUPS = WIDTH / CENT_W; // number of centroid words per packed read (256/16 = 16)
    // localparam int CHUNKS = D / WIDTH;      // number of 256-bit chunks per HV (8192/256 = 32)
    // widths
    localparam int ADER_W = CENT_W;         // adder tree input width (16)
    // localparam int ACC_W  = 16;             // accumulator width (16), TODO: might need to make this bigger to avoid overflow

    // ------------------------------------------------------
    // Instantiated modules
    // ------------------------------------------------------
    // adder_tree: sums GROUPS FP CENT_W-width values
    logic signed [ADER_W-1:0] ad_out;



    logic ad_done;
    logic ad_start;

    logic [CENT_W-1:0] modified_words [0:GROUPS-1];


    adder_tree #(
        .N(GROUPS),
        .WIDTH(ADER_W)
    ) u_adder_tree (
        .clk(clk),
        .rst(rst_n),
        .start(ad_start),
        .in  (modified_words),
        .out (ad_out),
        .done(ad_done)
    );

    // accumulator: accumulates chunk sums across CHUNKS for a single class
    logic                     accum_en;
    // logic signed [ADER_W-1:0] accum_din;
    // logic signed [ACC_W-1:0]  accum_dout;
    logic accum_clr;

    accumulator #(
        .WIDTH(ACC_W)
    ) u_accum (
        .clk  (clk),
        .rst_n(rst_n),
        .en   (accum_en),
        .clear(accum_clr),
        .din  (ad_out),
        .dout (accum_dout)
    );



// logic max_en;
    // // -------------------------------------------------
    // // Max selector across classes
    // // -------------------------------------------------
    // max #(
    //     .NUM_C(NUM_C)
    // ) max_inst (
    //     .clk     (clk),
    //     .rst     (rst_n),
    //     .en      (max_en),
    //     .clear   (max_clr),
    //     .A       (accum_dout),
    //     .label_i (class_L),   // class index from controller
    //     .label_o (pred_label),
    //     .max     ()   // not connected if only need label
    // );


    // ------------------------------------------------------
    // Internal control signals and registers
    // ------------------------------------------------------
    typedef enum logic [2:0] {
        IDLE,
        WAIT_DATA,    // wait 1 cycle for data to arrive / stabilize
        PROCESS_CHUNK,// present data to adder_tree (combinationally ad_in is ready), tick adder tree
        NEXT_CHUNK,   // read the next chunk of the clsss_hvs
        NEXT_CLASS,   // after all chunks for this class done
        DONE_STATE
    } state_e;

    state_e state, next_state;

    integer class_idx;    // 0..NUM_C-1
    integer cent_idx;    // 0..GROUPS-1

    // pipeline / handshake counters
    logic data_ready; // asserted when inputs are stable and we can process
    logic [1:0] wait_cnt;


    // logic max_clr;

    // -------------------------------------------------
    // Unpack class_hv into 16 words of 16 bits
    // -------------------------------------------------
    logic [CENT_W-1:0] class_words [0:GROUPS-1];

    genvar i,j;
    generate
        for (i = 0; i < GROUPS; i++) begin : UNPACK
            always_comb begin
                class_words[i] = class_hv[(i+1)*CENT_W-1 -: CENT_W];
            end    
        end
    endgenerate

    // -------------------------------------------------
    // Modify class_hv based on in_hv bits
    // -------------------------------------------------
    // Each input bit corresponds to one 16-bit FP16 weight
    generate
        // for (i = 0; i < WIDTH; i++) begin : APPLY_SIGN
        for (j = 0; j < GROUPS; j++) begin
            always_comb begin
                if (in_hv[cent_idx*GROUPS + j]) 
                    // flip sign bit (bit 15) of FP16
                    modified_words[j] = {~class_words[j][CENT_W-1], class_words[j][CENT_W-2:0]};  
                else
                    // unchanged
                    modified_words[j] = class_words[j];  
            end
        end    
        // end
    endgenerate

    // ------------------------------------------------------
    // FSM: control read strobes, input/class indices, accumulation
    // ------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state      <= IDLE;
            class_idx  <= 0;
            cent_idx   <= 0;   
            next_cent  <= 0;
            next_class <= 0;
            // next_dim   <= 0;
            accum_en   <= 0; 
            accum_clr  <= 0;
            done       <= 0;
            max_clr  <= 0;
            ad_start <= 0;
        end else begin
            // default de-assert strobes & enables
            next_cent  <= 0;
            // next_dim  <= 0;
            accum_en   <= 0;
            accum_clr  <= 0;
            next_class <= 0;
            done       <= 0;
            max_en     <= 0;
            max_clr  <= 0;
            ad_start <= 0;
            
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        class_idx <= 0;
                        cent_idx  <= 0;
                        accum_clr <= 1;       // clear accumulator for first class
                        state <= PROCESS_CHUNK;
                    end
                end

                PROCESS_CHUNK: begin
                    ad_start <= 1;
                    if (ad_done) begin
                        accum_en <= 1;
                        ad_start <= 0;         
                        state <= NEXT_CHUNK;
                    end
                    else state <= PROCESS_CHUNK;    
                end

                NEXT_CHUNK: begin
                    if (cent_idx + 1 < (D/GROUPS)) begin
                        cent_idx <= cent_idx + 1;
                        next_cent <= 1;       // request next class_hv chunk

                        // // every 256 class_hv chunks, request new input HV
                        // if (((cent_idx + 1) % 16) == 0) begin
                        //     next_dim <= 1;
                        // end

                        state <= WAIT_DATA;
                    end else begin
                        // finished all centroids for this class
                        state <= NEXT_CLASS;
                        max_en<= 1;

                    end
                end

                WAIT_DATA: begin
                    // allow one cycle for data to become valid (DRAM read latency assumed 1)
                    // wait_cnt <= wait_cnt + 1;
                    // if (wait_cnt == 1) begin
                    //     // data assumed stable now: process this chunk
                    //     state <= PROCESS_CHUNK;
                    // end
                    state <= PROCESS_CHUNK;

                end

                NEXT_CLASS: begin
                    if (class_idx + 1 < NUM_C) begin
                        class_idx <= class_idx + 1;
                        cent_idx  <= 0;
                        accum_clr <= 1;         // reset accumulator for new class
                        // request first input HV + first class_hv chunk
                        // next_dim  <= 1;         //TODO: This Should loop back to dim 0 of the input HV (higher level CTRL)
                        next_cent <= 0;         
                        next_class<= 1;         //TODO: This Should increment the class_hv (higher level CTRL)
                        state <= WAIT_DATA;
                    end else begin
                        // done <= 1;
                        
                        state <= DONE_STATE;
                    end
                end

                DONE_STATE: begin
                    done <= 1;
                    max_clr <= 1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end



endmodule
