#include <stdlib.h>
#include <stdio.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"

#define ARRAY_SIZE 10

int main() {
    int option;
    int array[ARRAY_SIZE];
    
    scanf("%d", &option);
    for(int i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &(array[i]));
    }

    // printf("Option = %d\n", option);
    
    // for(int i=0; i < ARRAY_SIZE; i++){
    //     printf("value[%d] = %d\n", i, array[i]);
    // }        

    switch (option) {
        case 0: 
            printf("%d\n", index_first_zero(array, ARRAY_SIZE));
            return 0;
        case 1: 
            printf("%d\n", index_last_zero(array, ARRAY_SIZE));
            return 0;
        case 2: 
            printf("%d\n", sum_between(array, ARRAY_SIZE));
            return 0;
        case 3: 
            printf("%d\n", sum_before_and_after(array, ARRAY_SIZE));
            return 0;
        default:
            printf("Данные некорректны\n");
            return 1;
    }
}