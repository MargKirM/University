#include "index_first_zero.h"

int index_first_zero(int array[], int length) {
    for(int n = 0; n < length; n++){
        if(array[n] == 0){
            return n;
        }
    }

    return -1;
}