module ALU(
    input wire [15:0] in_a,       
    input wire [15:0] in_b,
    input wire [2:0] select,
    output reg [15:0] ALU_out,
    input wire clk
);

always @(*) begin
    ALU_out = 16'b0;

    case (select)
        3'b000: ALU_out = in_a + in_b;                         
        3'b001: ALU_out = in_a - in_b;                  
        3'b010: ALU_out = in_a & in_b;                  
        3'b011: ALU_out = in_a | in_b;                   
        3'b100: ALU_out = in_a ^ in_b;     
        3'b101: ALU_out = in_a << in_b;
        3'b110: ALU_out = in_a >> in_b;

        3'b111:  
            if (in_a == in_b) begin
                ALU_out = 16'b0;
            end
            else  if (in_a > in_b)begin
                ALU_out = 16'b0000000000000001;
            end
            else begin
                ALU_out = 16'b0000000000000010;
            end
    endcase                           
end

endmodule