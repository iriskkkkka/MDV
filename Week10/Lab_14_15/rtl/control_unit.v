     module control_unit(
        input [15:0] instr,
        input run,
        input rst,
        input clk,
        output reg done,
        output reg [2:0] sel,
        output reg [3:0] mux_sel,
        output reg [7:0] en,
        output reg ens,
        output reg enc,
        output reg eni,
        output reg [15:0] imdt
    );

    // States
    parameter S0 = 3'b000;
    parameter S1 = 3'b001;
    parameter S2 = 3'b010;
    parameter S3 = 3'b011;
    parameter S4 = 3'b100;

    reg[2:0] state, next_state;

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
                next_state = S4;
            end
            S4: begin
                next_state = S0;
            end
            default: begin
                next_state = S0;
            end
        endcase
    end

    // States logic
    reg[2:0] addrx;
    reg[2:0] addry;
    reg[2:0] alusel;
    reg[7:0] immediate;
    reg[1:0] format;

    always @(*) begin
        // Extract instruction fields
        addrx  = instr[15:13];
        addry  = instr[12:10];
        alusel = instr[4:2];
        immediate = instr[12:5];
        format = instr[1:0];
        eni     = 1'b0;
        ens     = 1'b0;
        enc     = 1'b0;
        en      = 8'b0;
        mux_sel = 4'b0;
        sel     = 3'b0;
        done    = 1'b0;

        case(format)
            2'b00: begin
                case(state)
                    S0: begin
                        eni = 1'b1;
                        en = 8'b0;
                    end
                    S1: begin
                        ens = 1'b1;
                        mux_sel = {1'b0,addrx};
                    end
                    S2: begin
                        enc = 1'b1;
                        mux_sel = {1'b0,addry};
                        sel = alusel;
                    end
                    S3: begin
                        en = 8'b1 << addrx;
                    end
                    S4: begin
                        en = 8'b1 << addrx;
                        done = 1'b1;
                    end
                    default: begin
                        eni     = 1'b0;
                        ens     = 1'b0;
                        enc     = 1'b0;
                        en      = 8'b0; 
                        mux_sel = 4'b0;
                        sel     = 3'b0;
                        done    = 1'b0;
                    end
                endcase
                end
            2'b01: begin
                case(state)
                    S0: begin
                        eni = 1'b1;
                        en = 8'b0;
                    end
                    S1: begin
                        ens = 1'b1;
                        mux_sel = {1'b0,addrx};
                    end
                    S2: begin
                        enc = 1'b1;
                        imdt = {8'b0, immediate};
                        mux_sel = 4'b1000;
                        sel = alusel;
                    end
                    S3: begin
                        en = 8'b1 << addrx;
                    end 
                    S4: begin
                        en = 8'b1 << addrx;
                        done = 1'b1;
                    end
                    default: begin
                        eni     = 1'b0;
                        ens     = 1'b0;
                        enc     = 1'b0;
                        en      = 8'b0; 
                        mux_sel = 4'b0;
                        sel     = 3'b0;
                        done    = 1'b0;
                    end
                endcase
            end
            default: begin
                eni     = 1'b0;
                ens     = 1'b0;
                enc     = 1'b0;
                en      = 8'b0; 
                mux_sel = 4'b0;
                sel     = 3'b0;
                done    = 1'b0;
            end
        endcase
    end
    endmodule