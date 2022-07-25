// N namta print in c program....
#include <stdio.h>
int main() {
    int i, n, num;
    printf("Enter your number: ");
    scanf("%d", &num);

    for(n = 1; n <= num; n++){
        for(i = 1; i <= 10; i++){
            printf("%d x %d = %d \n", n, i, (n * i));
        }
        printf("\n");
    }

return 0;
}
