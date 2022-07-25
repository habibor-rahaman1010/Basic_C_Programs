//two real number summation in c program...

#include <stdio.h>

int main() {
    double a, b, sum;
    a = 9.5;
    b = 7.675;
    sum = (a + b);
    printf("Summation is: %.2lf \n", sum);
    printf("Summation is: %0.2lf \n", sum);
    printf("Summation is: %.0lf \n", sum);
    printf("Summation is: %0.0lf \n", sum);

return 0;
}
