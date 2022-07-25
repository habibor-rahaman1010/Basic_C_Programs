// 1 to n odd positive number number findout in c program as input form user....

#include <stdio.h>
int main() {
    int n, init = 1;
    printf("Enter your odd number: ");
    scanf("%d", &n);

    while(init <= n){
        if(init % 2 != 0){
            printf("%d \n", init);
        }
        init++;
    }

return 0;
}
