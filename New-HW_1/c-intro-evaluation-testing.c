/*
* CSCI 221 Intro Assignment
* Main file
* Put your testing here
*/

#include <stdio.h>
#include <stdlib.h>
#include "c-intro-evaluation-declarations.h"

// Put your testing inside this function

int main(int argc, char *argv[]){
    int box;
    int size;
    int n; // variable for powers
    int N = atoi(argv[1]); //variable for fibonacci, take the char input and convert it into an int
	if (argc != 2){
		printf("You're missing an argument \n");
	}
    // uncomment to test choose_mover
    printf("How many boxes do you want to move? ");
    scanf("%i", &box);
    choose_mover(box);
    // write code to take array input. 

    // uncomment to run find divisor code
    printf("How many number would you like to add?\n");
    scanf("%d", &size);
    unsigned int arr[size];
    printf("What numbers would you like to add to the array?");
        for (int i =0; i<size; i++){
            scanf("%d", &arr[i]);
        };
    find_divisor(arr, size);
    // uncomment to run powers
    //take input of powers
    printf("what number would you like to test?");
    scanf("%d",&n);
    powers(n);
    int X = fibonacci(N);
    printf("%d\n", X);

}
