package com.marlonzl7.convert;

public class DecimalToBinary {
    public static void main(String[] args) {
        int decimal = 10;
        int[] binary = convertDecimalToBinary(decimal);

        System.out.println("Decimal: " + decimal);

        System.out.print("Binário: ");
        for (int i = 0; i < binary.length; i++) {
            System.out.printf("%d", binary[i]);
        }
    }

    public static int[] convertDecimalToBinary(int decimal) {
        int k = (int) Math.floor(Math.log(decimal) / Math.log(2)) + 1;
        int[] binary = new int[k];

        if (decimal <= 0) {
            return binary;
        }

        for (int i = binary.length - 1; i >= 0; i--) {
            binary[i] = (decimal % 2 == 0) ? 0 : 1;
        }

        return binary;
    }
}
