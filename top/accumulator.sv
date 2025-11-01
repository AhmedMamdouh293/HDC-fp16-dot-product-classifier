// ===================================================
// FP16 Accumulator
// Author: Ahmed Mamdouh
// ===================================================
module accumulator #(
    parameter int WIDTH = 16   // Bit-width of accumulator
) (
    input  logic              clk,      // Clock
    input  logic              rst_n,    // Active-low reset
    input  logic              en,       // Enable accumulation
    input  logic              clear,    // clear signal
    input  logic [WIDTH-1:0]  din,      // Input data
    output logic [WIDTH-1:0]  dout      // Accumulated result
);

    logic [WIDTH-1:0] temp;

    
    float16_adder_comb adder (.a(dout), .b(din), .result(temp));
   

    // Sequential accumulation
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            dout <= '0;
        end 
        else if (clear) dout <= '0;
        else if (en) begin
            dout <= temp;
        end
    end



endmodule
