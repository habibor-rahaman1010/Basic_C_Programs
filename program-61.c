//two real number summation input as from user in c program...
#include <stdio.h>

int main() {
    double a, b, sum;
    printf("Enter your value of a: ");
    scanf("%lf", &a);

    printf("Enter your value of b: ");
    scanf("%lf", &b);
    sum = (a + b);

    printf("Summation is: %.2lf \n", sum);
    printf("Summation is: %0.2lf \n", sum);
    printf("Summation is: %.0lf \n", sum);
    printf("Summation is: %0.0lf \n", sum);

return 0;
}

