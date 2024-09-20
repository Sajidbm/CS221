#include <stdio.h>
#include <stdlib.h>
#include "powers.h"

// Put your testing inside this function

int main(void){
    int n; // variable for powers
    //take input of powers
    printf("what number would you like to test?");
    scanf("%d",&n);
    powers(n);
    return 0;
}
