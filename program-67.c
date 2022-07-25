#include <stdio.h>
int main() {
    double num1, num2, result;
    char sign;
    printf("Please enter your first number: ");
    scanf("%lf", &num1);
    printf("Please enter your second number: ");
    scanf("%lf", &num2);

    result = (num1 + num2);
    sign = '+';
    printf("%.0lf %c %.0lf = %.2lf \n", num1, sign, num2, result);

    result = (num1 - num2);
    sign = '-';
    printf("%.0lf %c %.0lf = %.2lf \n", num1, sign, num2, result);

    result = (num1 * num2);
    sign = '*';
    printf("%.0lf %c %.0lf = %.2lf \n", num1, sign, num2, result);

    result = (num1 / num2);
    sign = '/';
    printf("%.0lf %c %.0lf = %.2lf \n", num1, sign, num2, result);

    result = ((int)num1 % (int)num2);
    sign = '%';
    printf("%.0lf %c %.0lf = %.0lf \n", num1, sign, num2, result);

return 0;
}
