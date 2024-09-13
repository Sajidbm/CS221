/*
* CSCI 221 Intro Assignment
* Implementation file
* Put your code here
*/

#include "c-intro-evaluation-declarations.h"
#include <stdio.h>
#include <stdlib.h>
// Put your choose_mover function here
// I will need to write a floor function for this one
// do a quick type conversion 

int Ceil(float x){
    int u = (int)x; // this will get a new int variable called u and convert our existing x (which is float) into an integer
    if (u != x){
        u++;
    }
    //printf("%i",u);
    return u;
}


char choose_mover(unsigned int box){ // takes pos int input 
    int  cost_a, cost_b, alice, bob;
    alice = 23;
    bob = 30;
    // cost  
    cost_a  = Ceil((float)box/alice)*200;
    //printf("%i",cost_a);
    cost_b =  Ceil((float)box/bob)*260;
    //printf("%i",cost_b);
    // printf("%s", cost_a > cost_b ? &B:&A); don't know how to do it like this
    // interesting case for when the costs are equal and the ratio for which this is the case 
    if (cost_a>cost_b){
        printf("B\n");
        return 'B';
    }
    else{
        printf("A\n");
        return 'A';
    }

    
}

// Put your find_divisor function here

// I want to avoid false negatives: a number if it divides itself is not an answer I'd want. so on the second iteration I'd like to be able to not take the value i
pair find_divisor(unsigned int arr[], unsigned int size){
    pair result;
    // initialize
    result.divisor = 0;
    result.dividend = 0;
    int N = size;
    int flag = 0;

    for (int i = 0; i < N; i++){ //select divisor, iterate thru the items  
        int divis = arr[i];
        for (int j = 0; j < N; j++){
            if (i == j){
                continue; //skips the current iteration
            }
            int divid = arr[j];
            if (divid%divis == 0){
                result.divisor = divis;
                result.dividend = divid;
                flag = 1;
            }
        }
        if (flag){
            break; // breaks out of the outer loop
        }
    }
    printf("(%i,%i)", result.divisor, result.dividend);
    return result;
}

// Put your powers function here

unsigned int power(int b, int e){
    int res=1;
    while (e != 0){
        res*=b; // result = result*b
        --e; // e = e-1
    }
    //printf("%d",res);
    return res;
}

unsigned int powers(unsigned int n){
    int flag = 0;
    for (unsigned int i = 2; i <n; i++){ //iterate thru the base
        for (unsigned int j = 2;j<n; j++){ // iterate thru the exponent 
            if (power(i,j)<=n){
                flag++;
                //update the flag
            }
            else{
                break;
            }
        }
        }
        printf("%d", flag);
        return flag;
    }

// Put your fibonacci function here

unsigned int fibonacci(unsigned int N){
    if (N==1 || N ==2){
        return 1;
    }

    int X = fibonacci(N-1) + fibonacci(N-2);
    return X;
    // printf("%d\n", X);
}



