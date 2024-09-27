#include <stdio.h>
#include "expo.h"

unsigned int f(unsigned int x, unsigned int y) {
    if (y == 0){
        printf("1\n");
        return 1;
    }
    int exponent = y;
    int value = 1; // this will eventually become result, we update this
    int base = x;
    while (exponent > 1) {
        if (exponent % 2 == 1) {
            value = base * value; // the base was set to the initial
            //printf("r = %d\n", value);
        }
        base = base * base;
        //printf("s = %d\n", base);
        exponent = exponent / 2;
        //printf("y = %d\n", exponent);
    }
    int output = value * base;
    printf("%d\n", output);
    return output;
    }

