package com.marlonzl7.convert;

public class BinaryToDecimal {
    public static void main(String[] args) {
        int[] binary = {0, 1, 1, 1};

        System.out.print("Binário: ");
        for (int i = 0; i < binary.length; i++) {
            System.out.printf("%d", binary[i]);
        }

        System.out.printf("\nDecimal: %d\n", convertBinaryToDecimal(binary));

    }

    public static int convertBinaryToDecimal(int[] binary) {
        int decimal = 0;

        for (int i = 0; i < binary.length; i++) {
            decimal = decimal * 2 + binary[i];
        }

        return decimal;
    }
}
