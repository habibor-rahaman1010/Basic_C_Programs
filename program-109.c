// n to 1 odd positive number number findout in c program as input form user....

#include <stdio.h>
int main() {
    int n, init = 1;
    printf("Enter your odd number: ");
    scanf("%d", &n);

    while(init <= n){
        if(n % 2 != 0){
            printf("%d \n", n);
        }
        n--;
    }

return 0;
}
