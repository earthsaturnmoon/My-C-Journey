#include <stdio.h>
#include <string.h>


int main() {

char hero_name[30];

printf("What is your Hero's name: ");
// scanf("%s", hero_name);
fgets(hero_name, sizeof(hero_name), stdin);
hero_name[strcspn(hero_name, "\n")] = 0;


printf("Welcome to the quest %s!\n", hero_name);


 
    return 0;
}
