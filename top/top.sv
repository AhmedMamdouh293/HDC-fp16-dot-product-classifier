// ============================================================
// HDC Top-Level Dot Product + Classification
// - Instantiates multiple partial_dot units (256-bit each)
// - Uses adder_tree to sum partial dots
// - Uses max module to pick the best class
// Author: Ahmed Mamdouh
// ============================================================
module top #(
    parameter int D        = 8192,    // Total HV dimension
    parameter int WIDTH    = 256,     // Width per partial_dot
    parameter int CENT_W   = 16,      // Class HV element width (FP16)
    parameter int NUM_C    = 10,      // Number of classes
    parameter int ADDER_W  = 16       // Adder tree element width
)(
    input  logic                      clk,
    input  logic                      rst_n,
    input  logic                      start,

    // Input hypervector and class hypervector
    input  logic [D-1:0]              in_hv,
    input  logic [D-1:0]              class_hv,

    // Class index (driven externally by controller)
    input  logic [$clog2(NUM_C)-1:0]  class_L,

    // Control signals from controller
    output logic                  next_cent,  // request next class slice
    output logic                  next_class_o,  // request next class HV
    // input  logic                      max_en,
    // input  logic                      max_clr,

    // Outputs
    output logic [$clog2(NUM_C)-1:0]  pred_label,
    output logic                      done
);
    // ------------------------------------------------------------
    // Derived parameter
    // ------------------------------------------------------------
    localparam int GROUPS = D / WIDTH;
    // localparam int ACC_W  = 16;
    localparam STAGES = $clog2(GROUPS);
    localparam L = STAGES;

    // ------------------------------------------------------------
    // Internal wires
    // ------------------------------------------------------------
    logic [GROUPS-1:0]              pd_done;
    logic [ADDER_W-1:0]             pd_out [GROUPS-1:0];
    logic [GROUPS-1:0]              pd_next_cent;
    logic [GROUPS-1:0]              pd_next_class;
    logic [GROUPS-1:0]              pd_max_en;
    logic [GROUPS-1:0]              pd_max_clr;
    // logic [ADDER_W-1:0]             partial_sum;

    logic [L:0] done_d;
    logic [L:0] next_class_d;
    logic next_class;
    logic [$clog2(NUM_C)-1:0] label_q;

    // -------------------------------------------------
    // Unpack class_hv into 16 words of 16 bits
    // -------------------------------------------------
    logic signed [WIDTH-1:0] class_words [0:GROUPS-1];

    genvar i;
    generate
        for (i = 0; i < GROUPS; i++) begin : UNPACK
            always_comb begin
                class_words[i] = class_hv[(i+1)*WIDTH-1 -: WIDTH];
            end    
        end
    endgenerate

    // ------------------------------------------------------------
    // Generate partial_dot units
    // ------------------------------------------------------------
    genvar g;
    generate
        for (g = 0; g < GROUPS; g++) begin : GEN_PARTIAL
            partial_dot #(
                .D      (WIDTH),
                .WIDTH  (WIDTH),
                .CENT_W (CENT_W),
                .NUM_C  (NUM_C)
            ) u_partial_dot (
                .clk       (clk),
                .rst_n     (rst_n),
                .start     (start),

                // Slice each 256-bit segment
                .in_hv     (in_hv   [g*WIDTH +: WIDTH]),
                .class_hv  (class_words[g]),

                .next_cent (pd_next_cent[g]),
                .next_class(pd_next_class[g]),
                .max_en    (pd_max_en[g]),
                .max_clr   (pd_max_clr[g]),

                .accum_dout(pd_out[g]),
                .done      (pd_done[g])
            );

            // Expose the local dot-product singlas
           
            // assign pd_out[g] = partial_sum;
        end
    endgenerate

    logic max_en;
    logic max_clr;
    logic [L:0] max_clr_d;
    logic max_clr_q;


    assign next_cent    = &pd_next_cent;
    assign next_class   = &pd_next_class;
    assign max_en       = &pd_max_en;
    assign max_clr      = &pd_max_clr;

    // ------------------------------------------------------------
    // Adder tree: sum partial results from all groups
    // ------------------------------------------------------------
    logic [ADDER_W-1:0] ad_out;
    logic               ad_done;
    logic               ad_start;

    assign ad_start = &pd_done;
    adder_tree_2 #(
        .N(GROUPS),
        .WIDTH(ADDER_W)
    ) u_adder_tree (
        .clk(clk),
        .rst(rst_n),
        .start(max_en),
        .in  (pd_out),
        .out (ad_out),
        .done(ad_done)
    );

    // // ------------------------------------------------------------
    // // Accumulated dot product for current class
    // // (Registered for max module input)
    // // ------------------------------------------------------------
    // logic [ADDER_W-1:0] accum_dout;
    // always_ff @(posedge clk or negedge rst_n) begin
    //     if (!rst_n)
    //         accum_dout <= '0;
    //     else if (start)
    //         accum_dout <= ad_out;
    // end

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n)
            label_q <= '0;
        else
            label_q <= class_L;
    end

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n)
            next_class_d <= 0;
        else
            next_class_d <= {next_class_d[L-1:0], next_class};
    end

    assign next_class_o = next_class_d[L];

    always_ff @(posedge clk, negedge rst_n) begin
        if (!rst_n)
            max_clr_d <= 0;
        else
            max_clr_d <= {max_clr_d[L-1:0], max_clr};
    end

    assign max_clr_q = max_clr_d[L];

    // ------------------------------------------------------------
    // Max module: pick highest class activation
    // ------------------------------------------------------------
    max #(
        .NUM_C(NUM_C)
    ) max_inst (
        .clk     (clk),
        .rst     (rst_n),
        .en      (ad_done),
        .clear   (max_clr_q),
        .A       (ad_out),
        .label_i (label_q),     // class index from controller
        .label_o (pred_label),
        .max     ()             // optional if only label needed
    );


    // ------------------------------------------------------------
    // Done signal: all partial_dot modules completed
    // ------------------------------------------------------------
    // assign done = (class_L == 4'b1001) ? &pd_done : 0;

    always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        done_d <= '0;
    else
        done_d <= {done_d[L-1:0], ad_start};
    end

    assign done = done_d[L];  // previous stage
    // assign done   = done_pipe[L] & ~done_d;  // 1-cycle pulse


endmodule
