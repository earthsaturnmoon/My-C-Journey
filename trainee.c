#include <stdio.h>

int main() {

int age = 41;
char initial[10] = "A.S";
float targetSalary = 40000.00;
float budgetLimit = 45000.00;

printf("Your age is: %d\n", age);
printf("Your initials are: %s\n", initial);
printf("Your target salary is £%.2f.\n", targetSalary);

if (targetSalary <= budgetLimit) {
    printf("Salary is within budget. Approved!\n");
}
else {
    printf("Salary exceeds budget. Needs Senior approval.\n");
}

if (age > 40) {
    printf("Experience bonus may apply.\n");
}

    return 0;
}