                                                /* 3. The Binary Spy: 
                                                Create an integer variable. 
                                                Using a loop and bitwise operators (& and >>) to print its binary representation 
                                                (e.g., 5 becomes 00000101). No if statements allowed. */
#include <stdio.h>

int main() {

int secretValue = 5;                            // This is the number we want the spy on to get its binary value.
printf("Binary of %d: ", secretValue);          // This statement lets the user know what number we are checking  the binary of.

for(int i = 4; i > 0; i--) {                    //This forloop spies on hte 4 binary numbers from the right.

    printf("%d", (secretValue >> i) & 1);       //This statement is the conveyor belt of the program with & 1 being the secret spy window
}

printf("\n");                                   // This statement prints a new line to keep the code looking uncluttered.

    return 0;

}

