#include <stdio.h>
#include "util.h"

void insertionSort(int *arr, int length) {
    int i, j, current;

    for (i = 1; i < length; i++) {
        current = arr[i];
        
        for (j = i; (j > 0) && (current < arr[j - 1]); j--) {
            arr[j] = arr[j - 1];
        }
        
        arr[j] = current;
    }
}

int main() {
    initRandom();

    int arr[10];
    fillArray(arr, 10);

    printf("Antes de ordenar:\n");
    printArray(arr, 10);

    insertionSort(arr, 10);

    printf("\n\nDepois de ordenar:\n");
    printArray(arr, 10);

    printf("\n");

    return 0;
}