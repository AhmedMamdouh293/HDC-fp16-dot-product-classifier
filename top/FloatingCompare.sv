
// returns A >= B via the output register
module FloatingCompare (input [15:0]A,
                        input [15:0]B,
                        output reg result);

    always @(*) begin
        // compare signs
        if (A[15] != B[15])
            result = ~A[15];  // A is positive (0) -> A >= B -> result = 1

        // compare exponents
        else begin
            if (A[14:10] != B[14:10]) begin
                result = (A[14:10] > B[14:10]) ? 1'b1 : 1'b0;  // A has bigger exponent than B, so it is bigger
                if (A[15]) result = ~result;  // but if A is negative (1), bigger exponent means smaller number
            end
            // compare mantissas
            else begin
                result = (A[9:0] > B[9:0]) ? 1'b1 : 1'b0;  // A has bigger mantissa than B, so it is bigger
                if (A[15]) result = ~result;  // but if A is negative (1), bigger mantissa means smaller number
            end
        end
    end

endmodule