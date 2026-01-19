////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//File Name: Converter.v
//Created By: Sheetal Swaroop Burada
//Date: 30-04-2019
//Project Name: Design of 32 Bit Floating Point ALU Based on Standard IEEE-754 in Verilog and its implementation on FPGA.
//University: Dayalbagh Educational Institute
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


module Floating_Point_to_Integer(
		input [31:0] a_operand,
		output [31:0] Integer
		);

reg [23:0] Integer_Value;

always @(*)
begin
	if (a_operand[30:23] == 8'd127)
			begin
				Integer_Value = 23'd0;
			end

	else if (a_operand[30:23] == 8'd128)
			begin
				Integer_Value = {a_operand[22],22'd0};
				 
			end

	else if (a_operand[30:23] == 8'd129)
			begin
				Integer_Value = {a_operand[22:21],21'd0};
				 
			end

	else if (a_operand[30:23] == 8'd130)
			begin
				Integer_Value = {a_operand[22:20],20'd0};
				 
			end

	else if (a_operand[30:23] == 8'd131)
			begin
				Integer_Value = {a_operand[22:19],19'd0};
				 
			end

	else if (a_operand[30:23] == 8'd132)
			begin
				Integer_Value = {a_operand[22:18],18'd0};
				 
			end

	else if (a_operand[30:23] == 8'd133)
			begin
				Integer_Value = {a_operand[22:17],17'd0};
				 
			end

	else if (a_operand[30:23] == 8'd134)
			begin
				Integer_Value = {a_operand[22:16],16'd0};
				 
			end

	else if (a_operand[30:23] == 8'd135)
			begin
				Integer_Value = {a_operand[22:15],15'd0};
				 
			end

	else if (a_operand[30:23] == 8'd136)
			begin
				Integer_Value = {a_operand[22:14],14'd0};
				 
			end

	else if (a_operand[30:23] == 8'd137)
			begin
				Integer_Value = {a_operand[22:13],13'd0};
				 
			end

	else if (a_operand[30:23] == 8'd138)
			begin
				Integer_Value = {a_operand[22:12],12'd0};
				 
			end

	else if (a_operand[30:23] == 8'd139)
			begin
				Integer_Value = {a_operand[22:11],11'd0};
				 
			end

	else if (a_operand[30:23] == 8'd140)
			begin
				Integer_Value = {a_operand[22:10],10'd0};
				 
			end

	else if (a_operand[30:23] == 8'd141)
			begin
				Integer_Value = {a_operand[22:9],9'd0};
				 
			end

	else if (a_operand[30:23] == 8'd142)
			begin
				Integer_Value = {a_operand[22:8],8'd0};
				 
			end

	else if (a_operand[30:23] == 8'd143)
			begin
				Integer_Value = {a_operand[22:7],7'd0};
				 
			end

	else if (a_operand[30:23] == 8'd144)
			begin
				Integer_Value = {a_operand[22:6],6'd0};
				 
			end

	else if (a_operand[30:23] == 8'd145)
			begin
				Integer_Value = {a_operand[22:5],5'd0};
				 
			end

	else if (a_operand[30:23] == 8'd146)
			begin
				Integer_Value = {a_operand[22:4],4'd0};
				 
			end

	else if (a_operand[30:23] == 8'd147)
			begin
				Integer_Value = {a_operand[22:3],3'd0};
				 
			end

	else if (a_operand[30:23] == 8'd148)
			begin
				Integer_Value = {a_operand[22:2],2'd0};
				 
			end

	else if (a_operand[30:23] == 8'd149)
			begin
				Integer_Value = {a_operand[22:1],1'd0};
				 
			end

	else if (a_operand[30:23] >= 8'd150)
			begin
				Integer_Value = a_operand[22:0];
				 
			end

	else if (a_operand[30:23] <= 8'd126)
			begin
				Integer_Value = 24'd0;
				 
			end
end

assign Integer = {a_operand[31:23],Integer_Value[23:1]};

endmodule

// Simple Integer to Float (Slow/Naive implementation for now - or reuse PriorityEncoder)
// Just implementing basic positive conversion for test case 10/20.
module Integer_to_Floating_Point(
    input [31:0] a_operand,
    output [31:0] result
);
    // Sign: a[31]
    // If negative, take 2's complement
    wire sign = a_operand[31];
    wire [31:0] val = sign ? (~a_operand + 1) : a_operand;
    
    // Find Leading One (using Priority Encoder or loop)
    // CLZ (Count Leading Zeros)
    // Exponent = 127 + (31 - CLZ)
    // Mantissa = val << (CLZ + 1) >> 9 ? 
    
    // Simple iterative CLZ for synthesis/sim
    reg [4:0] clz;
    always @(*) begin
        clz = 31;
        for (int i=31; i>=0; i--) begin
            if (val[i]) begin
                clz = 31 - i;
                break;
            end
        end
    end
    
    reg [7:0] exponent;
    reg [22:0] mantissa;
    logic [31:0] shifted;
    
    always @(*) begin
        if (val == 0) begin
            exponent = 0;
            mantissa = 0;
        end else begin
            exponent = 127 + (31 - clz);
            // Example: 10 (1010). clz=28. (31-28)=3. Exp=130.
            // Val shifted: 1010 << 28 -> A0000000.
            // Normalize: 1.010... -> need 010...
            // Shift val left by clz to align MSB to bit 31.
            // Then take bits [30:8]
            // Then take bits [30:8]
            shifted = val << clz;
            mantissa = shifted[30:8];
            // $display("I2F: Val=%d CLZ=%d Exp=%d Man=%h Res=%h", val, clz, exponent, mantissa, {sign, exponent, mantissa});
        end
    end

    // Clockless debug?
    always @(a_operand) begin
         #1;
    end

    assign result = {sign, exponent, mantissa};

endmodule