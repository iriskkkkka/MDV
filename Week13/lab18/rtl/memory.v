module memory#(
    parameter file,
    parameter depth
)(
    input clk,
    input [7:0] addr,
    output reg [15:0] data_out
);  

    reg [15:0] mem[depth-1:0];

    initial begin
        $readmemh(file, mem);
    end

    always @(posedge clk) begin
        data_out <= mem[addr];
    end
endmodule

