#include "choose_mover.h"
#include <stdio.h>

int main(void){
    int box;
    printf("How many boxes do you want to move? ");
    scanf("%i", &box);
    choose_mover(box);
    // write code to take array input. 
    return 0;
}