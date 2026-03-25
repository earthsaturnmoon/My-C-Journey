#include <stdio.h>

int main() {

FILE *my_file;                          // 1. Create the hand
my_file = fopen("test.txt", "w");       //Think of it like this: Hand = Picking up the notebook.

                                        // 3. The Safety Guard (Always good to have!)
    if (my_file == NULL) {
        printf("Wait! The computer said no to creating the file.\n");
        return 1;
    }
                                       
fprintf(my_file, "Success!");          // 4. Write 
fclose(my_file);                       // 5. Always close before reopening.

printf("File created successfully!\n");


char secret_message[50];                 // --- SECTION 2: READING ---

my_file = fopen("test.txt", "r");       // Reuse the same 'my_file' hand, but open for "r" (Read)
if (my_file == NULL) 
{
    printf("Could not find the file!\n"); 
    return 1;
}

fscanf(my_file, "%s", secret_message);               // Use the Reading Eye: (Hand, Type, Box)

fclose(my_file);

                                                        // Show the world what you found!
    printf("The secret message I read was: %s\n", secret_message);

return 0;
}