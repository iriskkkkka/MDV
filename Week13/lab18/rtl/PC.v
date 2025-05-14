module PC(
    input clk,
    input rst,
    input done,
    input run,
    output reg runi,
    input [7:0] addr,
    output reg [7:0] addr_out
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            addr_out <= 8'b0;
            runi <= 1;
        end else if (done) begin
            runi <= 0;
            addr_out <= addr + 1;
        end else begin
            addr_out <= addr;
            runi <= 1;
        end
    end

endmodule