// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("hello world");
	nothing();
	loopy();
	return 0;
}

void nothing(void){
	printf("This ISR does nothing except print this line...(why? I dot even know)");
}
void loopy(void){
	int x=10;
	while(x>1){
		printf("x");
		x-1;
	}
}
void isr(void){
	printf("I am mocking an interrupt!");
	printf("MOCKING");
	printf("I am done mocking, end process!");
}
void thatHurt(void){
	printf("Ouch my CPU!");
	printf("attempting to heal and nourish CPU");
	printf("CPU is fixed :)");
}
void addForMe(void){
	int x=2;
	x=x+x;
	printf("4");
}
void theBestPokemon(void){
	printf("My favorite Pokemon is Bidoof");
}