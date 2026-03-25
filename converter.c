#include <stdio.h>

float to_cm( float inches) {
    return inches * 2.54f;
}


int main() {

float screen_size = 14.0;

printf("The 14.0 inch screen is %.2f cm.", to_cm(screen_size));

    return 0;
}