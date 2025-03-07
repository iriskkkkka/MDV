module my_logic(
	input wire[15:0]	in_a,
	input wire[15:0]	in_b,
	input wire[3:0]		select,
	output reg[15:0]	logic_out
);

always @(*) begin 
	case (select)
		4'b0000: logic_out = ~in_a;
		4'b0001: logic_out = ~(in_a|in_b);
		4'b0010: logic_out = ~(in_a)&in_b;
		4'b0011: logic_out = 16'b0000000000000000;
		4'b0100: logic_out = ~(in_a&in_b);
		4'b0101: logic_out = ~in_b;
		4'b0110: logic_out = in_a^in_b;
		4'b0111: logic_out = in_a&~(in_b);
		4'b1000: logic_out = ~in_a|in_b;
		4'b1001: logic_out = ~(in_a^in_b);
		4'b1010: logic_out = in_b;
		4'b1011: logic_out = in_a&in_b;
		4'b1100: logic_out = 16'b1111111111111111;
		4'b1101: logic_out = in_a|~(in_b);
		4'b1110: logic_out = in_a|in_b;
		4'b1111: logic_out = in_a;
		default: logic_out = 16'b0000000000000000;
	endcase
end
endmodule
