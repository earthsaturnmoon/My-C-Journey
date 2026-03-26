                                            /* 
                                             * This program demonstrates basic boolean logic in C by toggling 
                                             * a state and using an if-else block to output the result. 
                                             */
#include <stdio.h>

int main() {

    int is_light_on = 1;                      // Set initial light state to true (1)
    int is_light_off = !is_light_on;          // Use NOT operator to flip the state to false (0)

    if( is_light_off)                         // Check if the "off" condition is true
    {
        printf("It is dark in here!\n");      // Runs if is_light_off is 1
    }
    else {
        printf("The light is shining!\n");     // Runs if is_light_off is 0
    }

    return 0;                                 // Exit the program successfully
}
