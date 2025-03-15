module ALU(
    input          carry_in,
    input  [15:0]  in_a,
    input  [15:0]  in_b,
    input  [3:0]   select,
    input          mode,
    output reg     carry_out,
    output reg [15:0] alu_out,
    output reg     compare
);
wire [15:0] logic_res;
wire [15:0] arithmetic_res;
wire        a_carry_out;
wire        a_compare;

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

always @(*) begin
    alu_out   = mode ? logic_res : arithmetic_res;
    carry_out = mode ? 1'b0      : a_carry_out;
    compare   = mode ? 1'b0      : a_compare;
end

endmodule
