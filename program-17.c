// take three valuse from user and find average...in c program..
#include <stdio.h>

int main() {
    int x, y, z;
    float result;
    printf("Enter your value x, y, z: \n");
    scanf("%d %d %d", &x, &y, &z);
    int sum = (x + y + z);
    result = (sum / 3.0);

    printf("valu of x: %d \n", x);
    printf("valu of y: %d \n", y);
    printf("valu of z: %d \n", z);
    printf("Average valu of x, y, z: %.2f \n", result);
return 0;
}
