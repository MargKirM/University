#include "sum_before_and_after.h"
#include "index_last_zero.h"
#include "index_first_zero.h"
#include <stdlib.h>

int sum_before_and_after(int values[], int length) {
    int sum = 0;
    int first = index_first_zero(values, length);
    int last = index_last_zero(values, length);
    
    if (first >= 0) {
        for(int n = 0; n < first; n++) {
            sum += abs(values[n]);
        }
    }

    if (last >= 0) {
        for(int n = last + 1; n < length; n++) {
            sum += abs(values[n]);
        }
    }
    return sum;
}