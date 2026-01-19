module FMA (
    input [31:0] a_operand,
    input [31:0] b_operand,
    input [31:0] c_operand,
    output [31:0] result,
    output Exception
);

    wire [31:0] mul_result;
    wire mul_exception, mul_overflow, mul_underflow;
    
    // Stage 1: Multiplication (a * b)
    Multiplication mul_inst (
        .a_operand(a_operand),
        .b_operand(b_operand),
        .Exception(mul_exception),
        .Overflow(mul_overflow),
        .Underflow(mul_underflow),
        .result(mul_result)
    );
    


    wire add_exception;
    
    // Stage 2: Addition (mul_result + c)
    // AddBar_Sub = 0 for Addition
    Addition_Subtraction add_inst (
        .a_operand(mul_result),
        .b_operand(c_operand),
        .AddBar_Sub(1'b0), 
        .Exception(add_exception),
        .result(result)
    );

    assign Exception = mul_exception | add_exception;

endmodule
