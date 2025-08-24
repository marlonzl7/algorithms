#include <stdio.h>

int convertBinaryToDecimal(int *binary, int length) {
    int decimal = 0;

    for (int i = length - 1; i >= 0; i--) {
        decimal = decimal * 2 + binary[i];
    }

    return decimal;
}

int main() {
    int binary[] = {1, 1, 1, 1}; // 15
    int length = sizeof(binary) / sizeof(binary[0]);
    int decimal = 0;

    printf("Binário: ");

    for (int i = 0; i < length; i++) {
        printf("%d", binary[i]);
    }

    decimal = convertBinaryToDecimal(binary, length);

    printf("\nDecimal: %d\n", decimal);

    return 0;
}