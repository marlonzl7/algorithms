#include <stdio.h>
#include <stdbool.h>
#include "util.h"

void bubbleSort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    initRandom();

    int arr[10];
    fillArray(arr, 10);

    printf("Antes de ordenar:\n");
    printArray(arr, 10);

    bubbleSort(arr, 10);

    printf("\n\nDepois de ordenar:\n");
    printArray(arr, 10);
    
    printf("\n");

    return 0;
}

