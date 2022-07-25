//GCD greatest common divisor find out in c program...
#include <stdio.h>
int main() {
    int a, b, x, gcd;
    printf("Enter your first value of a: ");
    scanf("%d", &a);

    printf("Enter your second value of b: ");
    scanf("%d", &b);

    if( a < b){
        x = a;
    }
    else{
        x = b;
    }

    for(x; x >= 1; x--){
        if(a % x == 0 && b % x == 0){
            gcd = x;
            break;
        }
    }
    printf("GCD is: %d", gcd);

return 0;
}
