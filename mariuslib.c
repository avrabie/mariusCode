#include <stdio.h>
#include "mariusf.h"


int* populateTheArray(const int *arr, int n){
    int i = 0;
    while (i < n) {
        printf("Enter arr[%d]=", i);
        scanf("%d",&arr[i]);
        i=i+1;
    }
    return arr;
}