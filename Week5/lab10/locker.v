module locker(
	input wire[3:0] digit,
	input wire reset,
	input wire[2:0] currenta,
	output reg[2:0] nexta,
	output reg locked
);

//States
parameter zero = 3'b000;
parameter one = 3'b001;
parameter two = 3'b010;
parameter three = 3'b011;
parameter four = 3'b100;
parameter five = 3'b101;



reg[2:0] current, next;

always @(*) begin
	if (reset) begin
		current = zero;
	end 
	else begin
		current = currenta;
	end
end
	
always @(*) begin
	case(current)
		zero: begin
			if(digit == 4'b0011) begin
				next = one;
			end 
			else begin
				next = zero;
			end
		end

		one: begin
			if(digit == 4'b0011) begin
				next = two;
			end 
			else begin
				next = zero;
			end
		end

		two: begin
			if(digit == 4'b0101) begin
				next = three;
			end 
			else begin
				next = zero;
			end
		end

		three: begin
			if(digit == 4'b0010) begin
				next = four;
			end 
			else begin
				next = zero;
			end
		end

		four: begin
			if(digit == 4'b0101) begin
				next = five;
			end 
			else begin
				next = zero;
			end
		end

		five: begin
			if(digit == 4'b0110) begin
				next = zero;
			end 
			else begin
				next = zero;
			end
		end
		
		default: begin
			next = zero;
		end
	endcase
end

always @(*) begin
	if(current == 3'b101) begin
		locked = 0;
	end
	else begin
		locked = 1;
	end

	nexta = next;
end
endmodule

