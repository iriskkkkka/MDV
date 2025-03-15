module control_unit(
    input [15:0] instr,
    input run,
    input rst,
    input clk,
    output reg done,
    output reg [3:0] sel,
    output reg [2:0] mux_sel,
    output reg mode,
    output reg [7:0] en,
    output reg ens,
    output reg enc,
    output reg eni
);

// States
parameter S0 = 2'b00;
parameter S1 = 2'b01;
parameter S2 = 2'b10;
parameter S3 = 2'b11;

reg[1:0] state, next_state;

// State machine transition
always @(posedge clk or posedge rst) begin
    if (rst)
        state <= S0;
    else if (run)
        state <= next_state;
    else
        state <= state; 
end

always @(*) begin
    case(state)
        S0: begin
            next_state = S1;
        end
        S1: begin
            next_state = S2;
        end
        S2: begin
            next_state = S3;
        end
        S3: begin
            next_state = S0;
        end
    endcase
end

// States logic
reg[2:0] addrx;
reg[2:0] addry;
reg[2:0] init;
reg[3:0] alusel;
reg modesel;
reg[1:0] inter;

always @(*) begin
    // Extract instruction fields
    addrx  = instr[15:13];
    addry  = instr[12:10];
    init   = instr[9:7];
    alusel = instr[6:3];
    modesel = instr[2];
    inter  = instr[1:0];

    // Default values
    eni     = 1'b0;
    ens     = 1'b0;
    enc     = 1'b0;
    en      = 8'b10000001;
    mux_sel = 3'b0;
    sel     = 4'b0;
    mode    = 1'b0;
    done    = 1'b0;
    
    case(state)
        S0: begin
            eni = 1'b1;
        end
        S1: begin
            ens = 1'b1;
            mux_sel = addrx;
        end
        S2: begin
            enc = 1'b1;
            mux_sel = addry;
            sel = alusel;
            mode = modesel;
        end
        S3: begin
            en = 8'b1 << addrx;
            done = 1'b1;
        end 
    endcase
end
endmodule