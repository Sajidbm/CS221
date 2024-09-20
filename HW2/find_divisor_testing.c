
#include <stdio.h>
#include "find_divisor.h"

// Put your testing inside this function

int main(void){
    int size;
    // uncomment to run find divisor code
    printf("How many number would you like to add?\n");
    scanf("%d", &size);
    unsigned int arr[size];
    printf("What numbers would you like to add to the array?");
        for (int i =0; i<size; i++){
            scanf("%d", &arr[i]);
        };
    find_divisor(arr, size);
    return 0;
}
