#include "sum_between.h"
#include "index_last_zero.h"
#include "index_first_zero.h"

int sum_between(int values[], int length) {
    int sum = 0;
    int first = index_first_zero(values, length);
    int last = index_last_zero(values, length);

    if (first > 0 && last > 0) {
        for(int n = first+1; n < last; n++){
            sum += values[n];
        }
    }
    return sum;
}