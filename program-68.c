#include <stdio.h>
int main() {
    int num1, num2, result;
    char sign;
    printf("Please enter your first number: ");
    scanf("%d", &num1);
    printf("Please enter your second number: ");
    scanf("%d", &num2);

    result = (num1 + num2);
    sign = '+';
    printf("%d %c %d = %d \n", num1, sign, num2, result);

    result = (num1 - num2);
    sign = '-';
    printf("%d %c %d = %d \n", num1, sign, num2, result);

    result = (num1 * num2);
    sign = '*';
    printf("%d %c %d = %d \n", num1, sign, num2, result);

    double result2 = ((double)num1 / (double)num2); //type cast and value set to a new variable
    sign = '/';
    printf("%d %c %d = %.2lf \n", num1, sign, num2, result2);

    result = (num1 % num2);
    sign = '%';
    printf("%d %c %d = %d \n", num1, sign, num2, result);

return 0;
}

