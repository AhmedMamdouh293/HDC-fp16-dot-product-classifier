// =====================================================
// Parametrized FP16 Adder Tree
// Uses the float16_adder
// =====================================================
module adder_tree_2 #(
    parameter N = 8,  // number of inputs (must be power of 2 for now)
    parameter int WIDTH      = 16 // total width: 16 for FP16, 32 for FP32
) ( 
    input clk,
    input rst,
    input start,
    input  logic [WIDTH-1:0] in [N],   // N FP16 inputs
    output logic [WIDTH-1:0] out,       // final sum
    output logic done       // final sum
    // Exception flags
    // output logic underflow_flag,
    // output logic overflow_flag,
    // output logic invalid_operation_flag
);

    // Intermediate wires for each stage
    localparam STAGES = $clog2(N);
    localparam L = STAGES;

    // Declare a 2D array: stage[stage_index][element_index]
    logic [WIDTH-1:0] stage [0:STAGES][0:N-1];

    logic [L:0] done_pipe;
    logic done_d;

    // Assign inputs to stage 0
    genvar i, s;
    generate
        for (i = 0; i < N; i++) begin
            assign stage[0][i] = in[i];
        end
    endgenerate

    // Generate tree of adders
    generate
        for (s = 0; s < STAGES; s++) begin : gen_stage
            for (i = 0; i < N >> (s+1); i++) begin : gen_adder
                float16_adder adder (
                    .clk(clk),
                    .rst(rst),
                    .a(stage[s][2*i]),
                    .b(stage[s][2*i+1]),
                    .result(stage[s+1][i])
                    // .subtract(1'b0),
                    // .underflow_flag(),
                    // .overflow_flag(),
                    // .invalid_operation_flag()
                );
            end
        end
    endgenerate

    // Final output from last stage
    assign out = stage[STAGES][0];

    always_ff @(posedge clk or negedge rst)
    if (!rst)
        done_pipe <= '0;
    else
        done_pipe <= {done_pipe[L-1:0], start};

    assign done = done_pipe[L];  // previous stage
    // assign done   = done_pipe[L] & ~done_d;  // 1-cycle pulse

endmodule

