#include "Vlogic.h"
#include "Varithmetic.h"
#include "VALU.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


bool checker(int carryin, int a, int b, int sel, int mod){
	VALU* ALU = new VALU;

	ALU -> mode=mod;
	ALU -> carry_in=carryin;
	ALU -> in_a = a;
	ALU -> in_b = b;
	ALU -> select = sel;
	ALU -> eval();

	int out = (int)ALU -> alu_out;
	int carryout = (int)ALU -> carry_out;
	int comp = (int)ALU -> compare;

	bool check = 1;

	if(mod == 0){
		switch(sel){
			case 0:
				check = out == a;
				break;
			case 1:
				check = out == a|b;
				break;
			case 2:
				check = out == a|~(b);
				break;
			case 3:
				check = out == 0b1111111111111111;
				break;
			case 4:
				check = out == a|(a&~(b));
				break;
			case 5:
				check = out == (a|b) + (a&~b) + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 6:
				check = out == a-b-1 + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 7:
				check = out == (a&(~b)) - 1 + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 8:
				check = out == a + (a&b) + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 9:
				check = out == a+b + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 10:
				check = out == (a|~b) + (a&b) + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 11:
				check = out == (a&b) - 1 + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 12:
				check = out == a + a + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 13:
				check = out == (a|b) + a + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 14:
				check = out == (a|~b)+ a + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			case 15:
				check = out == a - 1 + carryin;
				check = carryout == (out & 0x10000 != 0);
				break;
			default:
				std::cout<<"Error invalid Selection"<<std::endl;
		}
	}
	else{
		switch(sel){
			case 0:
				check = out == ~a;
				break;
			case 1:
				check = out == ~(a|b);
				break;
			case 2:
				check = out == ~a&(b);
				break;
			case 3:
				check = out == 0b0;
				break;
			case 4:
				check = out == ~(a&(b));
				break;
			case 5:
				check = out == ~b;
				break;
			case 6:
				check = out == a^b;
				break;
			case 7:
				check = out == a&~(b);
				break;
			case 8:
				check = out == ~a|b;
				break;
			case 9:
				check = out == ~(a^b);
				break;
			case 10:
				check = out == b;
				break;
			case 11:
				check = out == (a&b);
				break;
			case 12:
				check = out == 0b1111111111111111;
				break;
			case 13:
				check = out == a|~(b);
				break;
			case 14:
				check = out == a|b;
				break;
			case 15:
				check = out == a;
				break;
			default:
				std::cout<<"Error invalid Selection"<<std::endl;
			}
	}
	return check;
}

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);

	bool check;
	for (int sel = 0; sel<16; sel++){
		srand(time(0));
		int lower = 0, upper = 0xFFFF;
		int a = lower + (rand() % (upper - lower + 1));
		int b = lower + (rand() % (upper - lower + 1));

		int lower1 = 0, upper1 = 1;
		int carryin = lower1 + (rand() % (upper1-lower1 + 1));
		check = checker(carryin, a, b, sel, 0);
}
	for (int sel = 0; sel<16; sel++){
		srand(time(0));
		int lower = 0, upper = 0xFFFF;
		int a = lower + (rand() % (upper - lower + 1));
		int b = lower + (rand() % (upper - lower + 1));

		int lower1 = 0, upper1 = 1;
		int carryin = lower1 + (rand() % (upper1-lower1 + 1));

		check = checker(carryin, a, b, sel, 1);
}

	std::cout<<"Everything correct? "<<check<<std::endl;

	return 0;

}
