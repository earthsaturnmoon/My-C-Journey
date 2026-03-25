// hero_name[strcspn(hero_name, "\n")] = 0;


#include <stdio.h>
#include <string.h>

struct Monster {
   char name[20];
   int power; 
};

int main() {

    struct Monster army[3];
    
    strcpy(army[0].name, "Grumble");
    army[0].power = 100;

    strcpy(army[1].name, "Sparky");
    army[1].power = 200;

    // 1. Show the status on the screen (what you already did)
    printf("--- Monster Army Status ---\n");
    for (int i = 0; i < 2; i++) {
        printf("Monster %d: %s | Power: %d\n", i + 1, army[i].name, army[i].power);
    }

    // 2. Open the "Digital Notebook" (The File)
    FILE *fp = fopen("army.txt", "w");

    // 3. Safety check: did the file open?
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // 4. Use a loop to write each monster into the file
    fprintf(fp, "--- Saved Monster Army ---\n");
    for (int i = 0; i < 2; i++) {
        // fprintf sends the data to the 'fp' file pointer
        fprintf(fp, "Monster %d: %s | Power: %d\n", i + 1, army[i].name, army[i].power);
    }

    // 5. Always close the notebook when finished!
    fclose(fp);
    
    printf("\nSuccess! Your army has been saved to army.txt\n");

    return 0;
}
