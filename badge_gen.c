                                                                        /* C-Based Badge Printing Loop
                                                                        This repository contains a small C script using a for loop to iterate 
                                                                        through and display badge IDs starting from a predefined integer (100).*/

#include <stdio.h>

int main() {                                                          

    int starting_id_number = 100;                                     // Set the initial ID number to start the sequence

    for(int i = 0; i <= 4; i++) {                                     // Loop 5 times (i = 0, 1, 2, 3, 4) to generate five badges
        printf("Printing Badge for ID: %d\n", starting_id_number);    // Output the current ID number to the console
        starting_id_number++;                                         // Increment the ID by 1 for the next iteration
    }
    

    return 0;
}

