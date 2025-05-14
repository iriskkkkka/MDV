module ldst (
    /* verilator lint_off LATCH */
    input [15:0] reg_oute [8:0], 
    input [15:0] memory_out,     
    output reg [15:0] ls_in,
    output [3:0] rx0,
    output [3:0] ry0     
);

integer file;
wire [3:0] rx = {1'b0,memory_out[15:13]};  
wire [3:0] ry = {1'b0,memory_out[12:10]};  
reg [15:0] temp_data;
wire [1:0] format = memory_out[1:0];
wire ls = memory_out[2];
reg [15:0] memory [0:65535]; 
reg initialized = 0;

assign rx0 = rx;
assign ry0 = ry;

initial begin
    integer i;
    file = $fopen("data.txt", "r");
    if (file != 0) begin
        for (i = 0; i < 65536; i = i + 1) begin
            if ($fscanf(file, "%04h\n", temp_data) == 1) begin
                memory[i] = temp_data;
            end else begin
                memory[i] = 16'h0;
            end
        end
        $fclose(file);
        initialized = 1;
    end else begin
        for (i = 0; i < 65536; i = i + 1) begin
            memory[i] = 16'h0;
        end
        initialized = 1;
    end
end

always @(*) begin
    if (format == 2'b11 && initialized) begin
        if (ls) begin 
            memory[reg_oute[ry]] = reg_oute[rx];
            
            file = $fopen("data.txt", "w");
            if (file == 0) begin
                $display("Error: Could not open file for writing!");
                $finish;
            end
            for (integer i = 0; i < 65536; i = i + 1) begin
                $fwrite(file, "%04h\n", memory[i]);
            end
            $fclose(file);
            ls_in = 16'b0; 
        end else begin 
            ls_in = memory[reg_oute[ry]];
        end
    end else begin
        ls_in = 16'b0; 
    end
end

endmodule

