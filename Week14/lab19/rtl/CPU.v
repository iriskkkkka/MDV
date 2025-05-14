module CPU#(
    parameter file = "program.hex",
    parameter depth = 256)
(
    input clk,
    input rst,

    output [7:0] addr_newe,
    output donee,
    output [7:0] addr_olde,
    output [15:0] reg_oute [8:0], 
    output runs,
    output [15:0] ls_ine,
    output [3:0] rx,
    output [3:0] ry
    );

wire [15:0] instr;
wire [7:0] addr_old;
wire [7:0] addr_new;
wire done;
wire [15:0] reg_c;
wire run_bitty;
wire runo;
wire runi;
wire [15:0] ls_in;

assign runs = run_bitty;
assign ls_ine = ls_in;

assign donee = done;
assign addr_newe = addr_new;

assign addr_olde = addr_old;
assign run_bitty = runo&runi;


// Program Counter
PC pc(
    .clk(clk),
    .rst(rst),
    .done(done),
    .runi(runi),
    .addr(addr_new),
    .addr_out(addr_old),
    .run(run_bitty)
);

//  Branch Unit
branch branch_unit(
    .pc(addr_old),
    .memory_out(instr),
    .creg(reg_c),
    .pc_new(addr_new),
    .runo(runo)
);

// Memory
memory#(
    .file(file),
    .depth(depth)
) mem(
    .clk(clk),
    .addr(addr_new),
    .data_out(instr)
);

// Bitty Core
bitty_core core(
    .clk(clk),
    .rst(rst),
    .run(run_bitty),
    .instr(instr),
    .ls_in(ls_in),
    .done(done),
    .reg_c(reg_c),
    .reg_oute(reg_oute)
);

// Load Store Unit
ldst ldst(
    .reg_oute(reg_oute),
    .ls_in(ls_in),  
    .memory_out(instr),
    .rx0(rx),
    .ry0(ry)
);

endmodule