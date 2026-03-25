#include <stdio.h>

int triple(int ingredient) {
    return ingredient * 3;
}

int main() {

    int my_number = 10;

    int answer = triple(my_number);

    printf("The trippled answer is %d.\n", answer);
}