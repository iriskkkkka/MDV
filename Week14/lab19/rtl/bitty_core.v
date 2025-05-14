module bitty_core(
    input clk,
    input rst,
    input run,
    input [15:0] instr,
    input [15:0] ls_in,
    output reg done,
    output reg [15:0] reg_c,
    output [15:0] reg_oute [8:0]
);

wire [2:0] alu_sel;
wire [3:0] mux_sel;
wire sel_ls;
wire mode;
wire [7:0] en;
wire ens;
wire enc;
wire eni;
wire enls;
wire [15:0] imdt;

assign reg_c = creg_out;
assign reg_oute = reg_out;

// Control Unit
control_unit control_unit_init(
    .instr(reginst_out),
    .run(run),
    .rst(rst),
    .clk(clk),
    .done(done),
    .sel(alu_sel),
    .sel_ls(sel_ls),
    .mux_sel(mux_sel),
    .en(en),
    .ens(ens),
    .enc(enc),
    .eni(eni),
    .enls(enls),
    .imdt(imdt)
);

wire [15:0] reg_input;
wire [15:0] reg_out[8:0];
// First Register that stores some value
register reg0(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[0]),
    .d_out(reg_out[0])
    );

// Other Registers
register reg1(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[1]),
    .d_out(reg_out[1])
);

register reg2(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[2]),
    .d_out(reg_out[2])
);

register reg3(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[3]),
    .d_out(reg_out[3])
);

register reg4(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[4]),
    .d_out(reg_out[4])
);

register reg5(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[5]),
    .d_out(reg_out[5])
);

register reg6(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[6]),
    .d_out(reg_out[6])
);

register reg7(
    .d_in(reg_input),
    .res(rst),
    .clk(clk),
    .en(en[7]),
    .d_out(reg_out[7])
);

assign reg_out[8] = imdt;


// Instruction Resgister
wire [15:0] reginst_out;
register instr_reg(
    .d_in(instr),
    .res(rst),
    .clk(clk),
    .en(eni),
    .d_out(reginst_out)
);


// MUX
wire [15:0] mux_out;
mux mux_init(
    .in(reg_out),
    .sel(mux_sel),
    .out(mux_out)
);

// MUX for L/S
wire [15:0] mux_ls_out;
muxls muxls(
    .ls(ls_out),
    .alu_out(alu_out),
    .sel_ls(sel_ls),
    .out(mux_ls_out)
);

// S register
wire [15:0] sreg_out;
register rs(
    .d_in(mux_out),
    .res(rst),
    .clk(clk),
    .en(ens),
    .d_out(sreg_out)
);

// ALU
wire [15:0] alu_out;
ALU alu_init(
    .in_a(sreg_out),
    .in_b(mux_out),
    .select(alu_sel),
    .ALU_out(alu_out)
);

// C register
wire [15:0] creg_out;
register rc(
    .d_in(mux_ls_out),
    .res(rst),
    .clk(clk),
    .en(enc),
    .d_out(creg_out)
);

// Load/Store
wire [15:0] ls_out;
register rls(
    .d_in(ls_in),
    .res(rst),
    .clk(clk),
    .en(enls),
    .d_out(ls_out)
);

assign reg_input = creg_out;

DPI dpi_init(
    .done(done),
    .reg_written(creg_out),
    .clk(clk)    
);

endmodule


