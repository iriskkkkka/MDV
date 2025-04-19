import "DPI-C" function void output_reg(int idx, shortint val);

module DPI (
  input  logic         done,
  input  logic [15:0]  reg_written [7:0],
  input  logic [7:0] en,
  input  logic         clk
);

  always_ff @(*) begin
    if (done) begin
      for (int i = 0; i < 8; i++) begin
        if (en[i]) output_reg(i, reg_written[i]);
      end
    end
  end

endmodule
