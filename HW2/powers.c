#include "powers.h"
#include <stdio.h>

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
        printf("%d\n", flag);
        return flag;
    }

