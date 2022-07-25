// n positive odd number summation in c program
#include <stdio.h>
int main() {
    int i, n, sum;
    printf("Enter n number as a input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("positive odd numbers summation is: %d", sum);

return 0;
}
