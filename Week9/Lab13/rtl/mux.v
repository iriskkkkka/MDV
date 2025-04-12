module mux(
    input [15:0] in[8:0],
    input [3:0] sel,
    output reg [15:0] out  
);

always @(*) begin
    case (sel)
        4'b0000: out = in[0];
        4'b0001: out = in[1];
        4'b0010: out = in[2];
        4'b0011: out = in[3];
        4'b0100: out = in[4];
        4'b0101: out = in[5];
        4'b0110: out = in[6];
        4'b0111: out = in[7];
        4'b1000: out = in[8];
        default: out = 16'b0;  
    endcase
end

endmodule
