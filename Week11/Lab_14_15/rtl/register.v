module register(
    input[15:0] d_in,
    input res,
    input clk,
    input en,
    output reg[15:0] d_out  
);

always @(posedge clk) begin
    if (res) begin
        d_out <= 16'b0;
    end else if (en) begin
        d_out <= d_in;
    end
end

endmodule