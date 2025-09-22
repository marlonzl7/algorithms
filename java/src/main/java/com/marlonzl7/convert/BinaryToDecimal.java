package com.marlonzl7.convert;

public class BinaryToDecimal {
    public static void main(String[] args) {
        int[] binary = {1, 0, 0, 1};

        System.out.print("Binário: ");
        for (int i = 0; i < binary.length; i++) {
            System.out.printf("%d", binary[i]);
        }

        System.out.printf("\nDecimal: %d\n", convertBinaryToDecimal(binary));

    }

    public static int convertBinaryToDecimal(int[] binary) {
        int decimal = 0;

        for (int i = binary.length - 1; i >= 0; i--) {
            int j = binary.length - i - 1;
            decimal += (binary[i] == 1) ? (int) Math.pow(2, j) : 0;
        }

        return decimal;
    }
}
