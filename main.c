#include <stdio.h>
#include <stdlib.h>
#include "mariusf.h"

int getDifference(int n, const int *arr);
int* populateTheArray(const int *arr, int n);

int main() {

    int n;
    printf("Enter n : \n");
    scanf("%d", &n);

    int* arr = (int *) malloc(sizeof(int)*n); //

    arr = populateTheArray(arr, n);

    int result = getDifference(n, arr);
    printf("Result: %d", result);

return 0;
}




int getDifference(int n, const int *arr) {
    int min = arr[0];
    int max = arr[0];

    int i = 0;
    while (i < n) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        i++;
    }

    int result = max - min;
    return result;
}
