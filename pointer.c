#include <stdio.h>

int main() {

    int treasure = 500;
    int *map = &treasure;

     printf("Following the map leads to: %d\n", *map);



    return 0;
}