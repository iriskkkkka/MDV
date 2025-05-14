module CPU#(
    parameter file = "program.hex",
    parameter depth = 256)
(
    input clk,
    input rst,
    input run
);

wire [15:0] instr;
wire [7:0] addr;
wire done;

// Program Counter
PC pc(
    .clk(clk),
    .rst(rst),
    .en(done),
    .addr(addr),
    .addr_out(addr)
);

// Memory
memory#(
    .file(file),
    .depth(depth)
) mem(
    .clk(clk),
    .addr(addr),
    .data_out(instr)
);

// Bitty Core
bitty_core core(
    .clk(clk),
    .rst(rst),
    .run(run),
    .instr(instr),
    .done(done)
);

endmodule