import "DPI-C" function void output_reg(shortint val);

module DPI (
  input  logic         done,
  input  logic [15:0]  reg_written,
  input  logic         clk
);

  always_ff @(*) begin
    if (done) begin
      output_reg(reg_written);
    end else begin
      output_reg(0);
    end
  end

endmodule
