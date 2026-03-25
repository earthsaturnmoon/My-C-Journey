#include <stdio.h>


void levelup(int *ptr) {
    *ptr = *ptr + 1;
}

int main() {

    int player_level = 5;
    printf("Player CURRENT level is: %d\n", player_level);
    
    
   levelup(&player_level);

     printf("Player NEW level is: %d\n", player_level);
   
    return 0;
}
