module ALU(
	input wire		carry_in,
	input wire[15:0]	in_a,
	input wire[15:0]	in_b,
	input wire[3:0]		select,
	input wire		mode,
	output wire		carry_out,
	output wire[15:0]	alu_out,
	output wire		compare
);

	wire[15:0] logic_res;
	wire[15:0] arithmetic_res;
	wire a_carry_out, a_compare;

	my_logic my_logic_init(
		.in_a(in_a),
		.in_b(in_b),
		.select(select),
		.logic_out(logic_res)
	);

	arithmetic my_arithm_init(
		.in_a(in_a),
		.in_b(in_b),
		.select(select),
		.carry_in(carry_in),
		.carry_out(a_carry_out),
		.compare(a_compare),
		.arithmetic_out(arithmetic_res)
	);

	assign alu_out = (mode)  ? logic_res : arithmetic_res;
	assign carry_out = (mode) ? 1'b0: a_carry_out;
	assign compare = (mode) ? 1'b0: a_compare;

endmodule
