#include "index_last_zero.h"

int index_last_zero(int array[], int length) {
    for(int n = length-1; n>=0; n--){
        if(array[n] == 0){
            return n;
        }
    }
    return -1;
}