module CPU#(
    parameter file = "program.hex",
    parameter depth = 256)
(
    input clk,
    input rst,
    input run,

    output donee,
    output [7:0] addr_newe,
    output [15:0] reg_oute [8:0] 
    );

wire [15:0] instr;
wire [7:0] addr_old;
wire [7:0] addr_new;
wire done;
wire [15:0] reg_c;
wire runi;
wire run_bitty;
wire runo;

assign donee = done;
assign addr_newe = addr_new;

assign run_bitty = runi&runo;


// Program Counter
PC pc(
    .clk(clk),
    .rst(rst),
    .done(done),
    .addr(addr_new),
    .addr_out(addr_old),
    .run(run_bitty),
    .runi(runi)
);

//  Branch Unit
branch branch_unit(
    .pc(addr_old),
    .memory_out(instr),
    .creg(reg_c),
    .pc_new(addr_new),
    .run(run),
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
    .done(done),
    .reg_c(reg_c),
    .reg_oute(reg_oute)
);

endmodule