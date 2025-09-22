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

        int resto = decimal;

        for (int i = binary.length - 1; i >= 0; i--) {
            int potencia = (int) Math.pow(2, i);

            binary[binary.length - i - 1] = (resto - potencia >= 0) ? 1 : 0;

            if (binary[binary.length - i - 1] == 1) {
                resto -= potencia;
            }
        }

        return binary;
    }
}
