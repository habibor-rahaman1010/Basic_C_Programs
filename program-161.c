// N namta print in c program....

#include <stdio.h>
int main() {

    int i, n, j, num;
    printf("Enter your number: ");
    scanf("%d", &num);

    for(n = 1; n <= num; n++) {
        for(i = 1; i <= 10; i++) {
            int current = 0;
            for(j = 1; j <= i; j++) {
                current += n;
            }
            printf("%d x %d = %d\n", n, i, current);
        }
        printf("\n\n");
    }

    return 0;
}
