#include "choose_mover.h"
#include <stdio.h>

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