module branch (
    input [7:0] pc,
    input [15:0] memory_out,
    input [15:0] creg,
    output reg [7:0] pc_new,
    input run,
    output reg runo
);
    wire [1:0] format = memory_out[1:0];
    wire [7:0] offset = memory_out[11:4];
    wire [1:0] condition = memory_out[3:2];

    always @(*) begin
            pc_new = pc;
            runo = 1;
            if (format == 2'b10) begin
                if (condition == 2'b00) begin
                    if (creg == 0) begin
                        pc_new = offset;
                        runo = 0;
                    end else begin
                        pc_new = pc + 1;
                        runo = 0;
                    end
                end else if (condition == 2'b01) begin
                    if (creg == 16'b0000000000000001) begin
                        pc_new = offset;  
                        runo = 0;
                    end else begin
                        pc_new = pc + 1;
                        runo = 0;
                    end
                end else if (condition == 2'b10) begin
                    if (creg == 16'b0000000000000010) begin
                        pc_new = offset;
                        runo = 0;
                    end else begin
                        pc_new = pc + 1;
                        runo = 0;
                    end
                end else if (condition == 2'b11) begin
                    pc_new = pc + 1;
                    runo = 0;
                end
            end
        end
endmodule