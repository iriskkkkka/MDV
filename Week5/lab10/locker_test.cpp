#include "Vlocker.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv){
	Verilated::commandArgs(argc, argv);
	Vlocker* locker = new Vlocker;

	int reset = 0;

	int current = 0;
	int next = 0;

	bool incorrectx;
	int incorrect[6] = {1,2,3,4,5,6};

	for (int i = 0; i<6; i++){
		locker -> digit = incorrect[i];
		locker -> reset = reset;
		locker -> currenta = current;
		locker -> eval();
		next = (int)locker -> nexta;
		incorrectx = (int)locker -> locked;
		std::cout<<"current state: "<<current<<std::endl;
		current = next;
		std::cout<<"next state: "<<next<<std::endl;
	}

	bool correctx;
	int correct[6] = {3,3,5,2,5,6};

	std::cout<<"-----------------------"<<std::endl;
	int currentc = 0;
	int nextc = 0;

	locker -> reset = 1;
	locker -> eval();

	for (int i = 0; i<6; i++){
		locker -> digit = correct[i];
		locker -> reset = reset;
		locker -> currenta = currentc;
		locker -> eval();
		nextc = (int)locker -> nexta;
		std::cout<<"current state: "<<currentc<<std::endl;
		currentc = nextc;
		correctx = (int)locker -> locked;
		std::cout<<"next state: "<<nextc<<std::endl;
	}

	std::cout<<"For the incorrect the output should be 1. The output is - "<<incorrectx<<std::endl;
	std::cout<<"For the correct the output should be 0. The output is - "<<correctx<<std::endl;

}
