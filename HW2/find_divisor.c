#include "find_divisor.h"
#include <stdio.h>

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
