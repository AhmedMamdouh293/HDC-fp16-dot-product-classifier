// Returns the maximum value
module max #(
    parameter int NUM_C   = 10          // Number of classes
) (
    input  logic clk,
    input  logic rst,
    input  logic en,
    input  logic clear,    // clear signal
    input  logic [15:0] A,
    input  logic [$clog2(NUM_C)-1:0] label_i,
    output logic [$clog2(NUM_C)-1:0] label_o,
    output logic [15:0] max
);

    logic [15:0] reg_v;
    logic [15:0] reg_in;
    logic cmp_o;

    logic [$clog2(NUM_C)-1:0] reg_l;
    logic [$clog2(NUM_C)-1:0] label_in;

    assign label_o = reg_l;
    assign max     = reg_v;

    // Input reg
    always_ff @(posedge clk or negedge rst) begin : REG_IN 
        if (!rst)
            reg_in <= 16'b1111110000000000; // -Infinity
        else if (clear)  reg_in <= 16'b1111110000000000; // -Infinity 
        else if (en)
            reg_in <= A;    
    end

    // label_in reg
    always_ff @(posedge clk or negedge rst) begin : LABEL_IN 
        if (!rst)
            label_in <= '0; 
        else if (en)
            label_in <= label_i;    
    end

    // Value reg
    always_ff @(posedge clk or negedge rst) begin : REG_V 
        if (!rst)
            reg_v <= 16'b1111110000000000; // -Infinity
        else if (clear)  reg_v <= 16'b1111110000000000; // -Infinity  
        else if (cmp_o)
            reg_v <= reg_in;   // update only when new max
    end

    // Label reg
    always_ff @(posedge clk or negedge rst) begin : LABEL_V 
        if (!rst)
            reg_l <= '0;
        else if (clear)
            reg_l <= '0;
        else if (cmp_o)
            reg_l <= label_in;  // update only when new max
    end

    FloatingCompare CMP(   
        .A(reg_in),
        .B(reg_v),
        .result(cmp_o)                    
    );

endmodule
