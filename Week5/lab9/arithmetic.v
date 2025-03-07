module arithmetic(
	input wire[15:0]	in_a,
	input wire[15:0]	in_b,
	input wire		carry_in,
	input wire[3:0]		select,
	output reg[15:0]	arithmetic_out,
	output reg		carry_out,
	output reg		compare	
);

always@(*) begin 
	arithmetic_out = 16'b0;
	carry_out = 1'b0;
	compare = 1'b0;

		case(select)
			4'b0000: arithmetic_out = in_a;
			4'b0001: arithmetic_out = in_a | in_b;
			4'b0010: arithmetic_out = in_a | ~(in_b);
			4'b0011: arithmetic_out = 16'b1111111111111111;
			4'b0100: arithmetic_out = in_a | (in_a&~(in_b));
			4'b0101: {carry_out, arithmetic_out} = {1'b0,(in_a|in_b)} + {1'b0,(in_a&~(in_b))} + {16'b0,carry_in};
			4'b0110: {carry_out, arithmetic_out} = {1'b0,in_a} + ({1'b0,~in_b}+17'b1) - 17'b1 + {16'b0,carry_in};
			4'b0111: {carry_out, arithmetic_out} = {1'b0,in_a&~(in_b)} - 17'b1 + {16'b0,carry_in};
			4'b1000: {carry_out, arithmetic_out} = {1'b0,in_a} + {1'b0,in_a&in_b} + {16'b0,carry_in};
			4'b1001: {carry_out, arithmetic_out} = {1'b0,in_a} + {1'b0,in_b} + {16'b0,carry_in};
			4'b1010: {carry_out, arithmetic_out} = {1'b0,(in_a|~(in_b))} + {1'b0,in_a&in_b} + {16'b0,carry_in};
			4'b1011: {carry_out, arithmetic_out} = {1'b0,(in_a&in_b)} - 17'b1 + {16'b0,carry_in};
			4'b1100: {carry_out, arithmetic_out} = {1'b0,in_a} + {1'b0,in_a} + {16'b0,carry_in};
			4'b1101: {carry_out, arithmetic_out} = {1'b0,(in_a|in_b)} + {1'b0,in_a} + {16'b0,carry_in};
			4'b1110: {carry_out, arithmetic_out} = {1'b0,(in_a|~(in_b))} + {1'b0,in_a} + {16'b0,carry_in};
			4'b1111: {carry_out, arithmetic_out} = {1'b0,in_a} - 17'b1 + {16'b0,carry_in};
			default: {carry_out, arithmetic_out} = 17'b0;
		endcase

		if (in_a == in_b)
			compare = 1'b1;
end
endmodule

