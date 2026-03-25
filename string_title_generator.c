#include <stdio.h>
#include <string.h>


int main() {

char name[50];
char title[50] = ", The Great";

printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = 0;


strcat(name, title);

printf("All hail %s!\n", name);



    return 0;
}
