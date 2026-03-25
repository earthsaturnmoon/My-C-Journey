#include <stdio.h>
#include <string.h>

struct Monster {                    // created a struct outside the main fuction container.
   char name[20];                   // struct contains two variables.
   int power; 
};

int main() {

    struct Monster army[2];         // initialise the struct array that can hold three indices.
    
    strcpy(army[0].name, "Grumble");        // Pull the char name variable from the struct Monster using the dot, and assign at indeex 0 the string grumble to it.
    army[0].power = 100;                    // Pull the int power variable form the struct Monster using the dot, and assign at index 0 value of 100 to it.

    strcpy(army[1].name, "Sparky");         // Same as above but for index 1.
    army[1].power = 200;                    // Same as above but for index 1.

    printf("--- Monster Army Status ---\n");
    for (int i = 0; i < 2; i++) {               // For loop to interate for the value of i

                                                // Note the i +1 below. The value changes with i.
        printf("Monster %d: %s | Power: %d\n", i + 1, army[i].name, army[i].power);     
    }
    

    return 0;
}