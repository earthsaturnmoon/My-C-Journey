// Manual Hex Conversion: 
// Take a decimal number and manually convert it to Hexadecimal using only math (/ and %). 
// Print the result.

#include <stdio.h>

int main() {
    int decimal = 30; // Our test number
    char hex_alphabet[] = "0123456789ABCDEF";
    char result[50];  // A "box" to hold our hex characters
    int i = 0;

    // The core math loop
    while (decimal > 0) {
        int remainder = decimal % 16;   // Get the current digit (0-15)
        result[i] = hex_alphabet[remainder]; // Look up the character
        decimal = decimal / 16;         // "Shave off" that digit
        i++;                            // Move to the next spot in our array
    }

    // Now we print the array BACKWARDS
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
    printf("\n");

    return 0;
}
