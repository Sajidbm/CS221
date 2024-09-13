/*
* CSCI 221 Intro Assignment
* Header file
* You should not need to edit this file 
* unless you are creating additional functions
*/

// why do we even need this file in the first place?

// initializing the struct that will store the dividend and divisor. 
typedef struct pair_{
	unsigned int divisor;
	unsigned int dividend;
}pair;

char choose_mover(unsigned int);

pair find_divisor(unsigned int[], unsigned int);

unsigned int powers(unsigned int);

unsigned int fibonacci(unsigned int);

