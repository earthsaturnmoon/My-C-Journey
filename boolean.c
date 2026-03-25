#include <stdio.h>

int main() {

    int is_light_on = 1;
    int is_light_off = !is_light_on;

    if( is_light_off)
    {
        printf("It is dark in here!\n");
    }
    else {
        printf("The light is shining!\n");
    }

    return 0;
}
