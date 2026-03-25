// Bubble sort to sort an array of numbers.
#include <stdio.h>

int main() {
    // 1. Create a messy array of numbers
    int numbers[] = {40, 10, 30, 20};
    int n = 4; // The number of items in our array
    int temp;  // Our "Empty Glass" for swapping

    // 2. The Outer Loop (The "Passes")
    // This tells the computer how many times to repeat the whole process.
    for (int i = 0; i < n - 1; i++) {

        // 3. The Inner Loop (The "Comparison")
        // This loop walks down the list, comparing neighbors.
        for (int j = 0; j < n - i - 1; j++) {

            // 4. The Decision: Are they in the wrong order?
            if (numbers[j] > numbers[j + 1]) {
                
                // 5. The 3-Step Swap (The "Glasses Trick")
                temp = numbers[j];         // Pour first number into temp
                numbers[j] = numbers[j + 1]; // Move second number to first spot
                numbers[j + 1] = temp;     // Move temp into second spot
            }
        }
    }

    // 6. Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
