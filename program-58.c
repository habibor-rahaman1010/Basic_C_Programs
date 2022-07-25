//type cast in c program
#include <stdio.h>
int main() {
    int n, z;
    double x, m;

    x = 10.5;
    n = (int) x;
    printf("Value of n is: %d \n", n);
    printf("Value of x is: %lf \n", x);

    z = 15;
    m = (float) z;
    printf("Value of z is: %d \n", z);
    printf("Value of m is: %lf \n", m);

return 0;
}
