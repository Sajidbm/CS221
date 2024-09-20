
#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"


int main(int argc, char *argv[]){
	if (argc != 2){
		printf("You're missing an argument \n");
	}
    int N = atoi(argv[1]); //variable for fibonacci, take the char input and convert it into an int
    int X = fibonacci(N);
    printf("%d\n", X);
    return 0;
}
