#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(int *binary, int length) {
    int decimal = 0;

    for (int i = length - 1; i >= 0; i--) {
        decimal += (binary[i] != 0) ? pow(2, length - i - 1) : 0;
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