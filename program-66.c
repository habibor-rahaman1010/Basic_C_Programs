//as two input from user and sum, mul, sub and divide in c program.....

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("%lf \n", (double)num1); // type cast integer to float....

    printf("%d + %d = %d \n", num1, num2, (num1 + num2));
    printf("%d - %d = %d \n", num1, num2, (num1 - num2));
    printf("%d * %d = %d \n", num1, num2, (num1 * num2));
    printf("%d / %d = %.2lf \n", num1, num2, ((double)num1 / (double)num2)); // type cast integer to float....
    printf("%d modulus %d = %d \n", num1, num2, (num1 % num2));

return 0;
}
