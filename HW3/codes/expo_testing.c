#include "expo.h"
#include <stdio.h>

int main(void){

    unsigned int arr[2];
    printf("What numbers would you like to test?");
        for (int i =0; i<2; i++){
            scanf("%d", &arr[i]);
        };
    f(arr[0], arr[1]);
    return 0;
}