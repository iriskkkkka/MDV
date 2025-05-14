module PC(
    input clk,
    input rst,
    input en,
    input [7:0] addr,
    output reg [7:0] addr_out
);
    reg [15:0] mem[255:0];

    initial begin
        $readmemh("program.hex", mem);
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            addr_out <= 8'b0;
        end else if (en) begin
            addr_out <= addr + 1;
        end
    end

endmodule