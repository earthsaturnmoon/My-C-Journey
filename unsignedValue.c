// The Overflow Glitch: Take an unsigned char (max value 255). 
// Add 1 to it. Print the result. 
// Explain why it didn't become 256.

#include <stdio.h>

int main() {

    unsigned char boy = 255;                        // declaring unsigned char value.

    unsigned char value = boy + 1;                  // carryoing out unsigned char value calculation.

    printf("Your new char value is %u.\n", value);  // print statement to show on console.

    return 0;
}