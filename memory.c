#include <stdio.h>

int main() {

    int secret_code = 1234;
    int *ptr = &secret_code;

    printf("The Value of the secret code is: %d\n", secret_code);
    printf("The Memory Address is: %p\n", &secret_code);
    printf("The Value of the secret code is %d\n", *ptr);

    return 0;
}