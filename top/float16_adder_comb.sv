// ===================================================
// FP16 adder
// Author: Ahmed Mamdouh
// ===================================================

module float16_adder_comb (
    // input clk,
    // input rst,
    input  logic [15:0] a, // First 16-bit floating-point number
    input  logic [15:0] b, // Second 16-bit floating-point number
    output logic [15:0] result // Result of the addition
);
    // -------------------------------------------------
    // Extract sign, exponent, and significand fields
    // -------------------------------------------------
    wire sign_a = a[15];
    wire sign_b = b[15];
    wire [4:0] exp_a = a[14:10];
    wire [4:0] exp_b = b[14:10];
    wire [10:0] sig_a = (exp_a == 0) ? {1'b0, a[9:0]} : {1'b1, a[9:0]}; // include hidden 1
    wire [10:0] sig_b = (exp_b == 0) ? {1'b0, b[9:0]} : {1'b1, b[9:0]};

    // -------------------------------------------------
    // Intermediate variables
    // -------------------------------------------------
    reg [4:0] exp_diff;
    reg [13:0] sig_a_aligned, sig_b_aligned; // add 3 GRS bits
    reg [4:0] exp_max;
    reg [14:0] sig_sum;
    reg result_sign;
    reg [4:0] exp_result;
    reg [10:0] sig_result;

    // reg [15:0] temp_result;

    logic guard, round_bit, sticky;

    always @(a, b) begin
        // -------------------------------------------------
        // Align the significands with GRS bits
        // -------------------------------------------------
        if (exp_a > exp_b) begin
            exp_diff = exp_a - exp_b;
            sig_a_aligned = {sig_a, 3'b000}; // add guard/round/sticky
            if (exp_diff >= 13) begin
                // shift fully out -> sticky = 1 if anything nonzero
                sig_b_aligned = {11'b0, 2'b00, |sig_b};
            end else begin
                sig_b_aligned = {sig_b, 3'b000} >> exp_diff;
                // sticky collects shifted-out bits
                sig_b_aligned[0] = |({sig_b, 3'b000} << (14-exp_diff));
            end
            exp_max = exp_a;
        end else begin
            exp_diff = exp_b - exp_a;
            sig_b_aligned = {sig_b, 3'b000};
            if (exp_diff >= 13) begin
                sig_a_aligned = {11'b0, 2'b00, |sig_a};
            end else begin
                sig_a_aligned = {sig_a, 3'b000} >> exp_diff;
                sig_a_aligned[0] = |({sig_a, 3'b000} << (14-exp_diff));
            end
            exp_max = exp_b;
        end

        // -------------------------------------------------
        // Add/subtract significands
        // -------------------------------------------------
        if (sign_a == sign_b) begin
            sig_sum    = sig_a_aligned + sig_b_aligned;
            result_sign = sign_a;
        end else begin
            if (sig_a_aligned >= sig_b_aligned) begin
                sig_sum    = sig_a_aligned - sig_b_aligned;
                result_sign = sign_a;
            end else begin
                sig_sum    = sig_b_aligned - sig_a_aligned;
                result_sign = sign_b;
            end
        end

        exp_result = exp_max;

        // -------------------------------------------------
        // Normalize result
        // -------------------------------------------------
        if (sig_sum[14]) begin
            // overflow -> shift right
            sig_result = sig_sum[14:4];
            exp_result = exp_result + 1;
        end else begin
            // normalize left
            while (sig_sum[13] == 0 && exp_result > 0 && sig_sum != 0) begin
                sig_sum   = sig_sum << 1;
                exp_result = exp_result - 1;
            end
            sig_result = sig_sum[13:3]; // drop GRS bits
        end

        // -------------------------------------------------
        // Rounding (nearest-even)
        // -------------------------------------------------
        
        guard     = sig_sum[2];
        round_bit = sig_sum[1];
        sticky    = sig_sum[0];

        if (guard && (round_bit || sticky || sig_result[0])) begin
            sig_result = sig_result + 1;
            if (sig_result == 11'b10000000000 || sig_result == 11'b00000000000) begin
                sig_result = sig_result >> 1;
                exp_result = exp_result + 1;
            end
        end

        // -------------------------------------------------
        // Handle underflow/zero
        // -------------------------------------------------
        if (exp_result == 0 || sig_sum == 0) begin
            result = 16'b0;
        end else begin
            // Pack result
            result = {result_sign, exp_result[4:0], sig_result[9:0]};
        end
    end

    // // -------------------------------------------------
    // // Register output
    // // -------------------------------------------------
    // always_ff @(posedge clk or negedge rst) begin
    //     if (~rst)
    //         result <= '0;
    //     else
    //         result <= temp_result;
    // end
endmodule
