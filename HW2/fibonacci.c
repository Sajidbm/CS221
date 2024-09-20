#include <stdio.h>
#include "fibonacci.h"

unsigned int fibonacci(unsigned int N){
    if (N==1 || N ==2){
        return 1;
    }

    int X = fibonacci(N-1) + fibonacci(N-2);
    return X;
    // printf("%d\n", X);
}