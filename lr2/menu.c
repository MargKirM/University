#include <stdlib.h>
#include <stdio.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"

#define ARRAY_SIZE 100

int main() {
    int option;
    int length = 0;
    int array[ARRAY_SIZE];
    
    scanf("%d", &option);
    while ((scanf("%d", &(array[length])) == 1) && (length < ARRAY_SIZE)) {
		length++;
    }

    switch (option) {
        case 0: 
            printf("%d\n", index_first_zero(array, length));
            return 0;
        case 1: 
            printf("%d\n", index_last_zero(array, length));
            return 0;
        case 2: 
            printf("%d\n", sum_between(array, length));
            return 0;
        case 3: 
            printf("%d\n", sum_before_and_after(array, length));
            return 0;
        default:
            printf("Данные некорректны\n");
            return 1;
    }
}