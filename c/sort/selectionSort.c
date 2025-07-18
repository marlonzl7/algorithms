#include <stdio.h>
#include "util.h"

void selectionSort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        int min = i;

        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (i != min) {
            int aux = arr[i];
            arr[i] = arr[min];
            arr[min] = aux;
        }
    }
}

int main() {
    initRandom();

    int arr[10];
    fillArray(arr, 10);

    printf("Antes de ordenar:\n");
    printArray(arr, 10);

    selectionSort(arr, 10);

    printf("\n\nDepois de ordenar:\n");
    printArray(arr, 10);

    printf("\n");

    return 0;
}