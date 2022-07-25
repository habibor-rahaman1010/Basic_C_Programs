// N namta print in c program....
#include <stdio.h>
int main() {
    int i, n, num, sum;
    printf("Enter your number: ");
    scanf("%d", &num);

    for(n = 1; n <= num; n++){
        sum = 0;
        for(i = 1; i <= 10; i++){
            sum = sum + n;
            printf("%d x %d = %d \n", n, i, sum);
        }
        printf("\n");
    }

return 0;
}


