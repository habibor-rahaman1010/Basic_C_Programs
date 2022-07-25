//LCM least common multiplication find out in c program...

#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;

    printf("Enter your first value of n1: ");
    scanf("%d", &n1);

    printf("Enter your second value of n2: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;
    printf("\n");

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}


