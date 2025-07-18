#include "util.h"
#include <stdlib.h>

void initRandom(void) {
    srand(time(NULL));
}

int fillArray(int *arr, int length) {
    if (arr == NULL || length <= 0) return -1;

    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100;
    }

    return 0;
}

void printArray(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int fillMatrix(int *arr, int rows, int cols) {
    if (arr == NULL || rows <= 0 || cols <= 0) return -1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i * cols + j] = rand() % 100;
        }
    }

    return 0;
}

void printMatrix(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i * cols + j]);
        }
        printf("\n");
    }
}