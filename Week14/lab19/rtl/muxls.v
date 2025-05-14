module muxls(
    input [15:0] ls,
    input [15:0] alu_out,
    input sel_ls,
    output reg [15:0] out
);

always @(*) begin
    if (sel_ls) begin
        out = ls;
    end else begin
        out = alu_out;
    end
end

endmodule
