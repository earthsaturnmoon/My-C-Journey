
#include <stdio.h>
#include <string.h>



int main() {

    char secret_password[50] = "dragon";
    char user_input[20];

    printf("Enter the secret password to pass the bridge: ");
    fgets(user_input, sizeof(user_input), stdin);
    user_input[strcspn(user_input, "\n")] = 0;

    if (strcmp(secret_password, user_input) == 0) 
    {
        printf("The bridge lowers. You may pass!\n");
    }
    else
    {
        printf("The dragon eats you! Game Over.\n");
    }

    return 0;
}
