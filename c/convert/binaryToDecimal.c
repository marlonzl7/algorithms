#include <stdio.h>
#include <math.h>


double convertBinaryToDecimal(int *binary, int length) {
    double decimal = 0;
    double powerOfTwo = 1; 

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == 1) {
            decimal += powerOfTwo;
        }
        powerOfTwo *= 2; 
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
