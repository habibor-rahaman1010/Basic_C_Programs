//print -2 to n negative even number using while loop in c program
#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your n number: ");
    scanf("%d", &n);

    if(n < 0){
        while(init >= n){
            int remainder = (init % 2);
            if(remainder == 0){
                printf("%d \n", init);
            }
            init-=1;
        }
    }
    else{
        n = -n;
        while(init >= n){
            int remainder = (init % 2);
            if(remainder == 0){
                printf("%d \n", init);
            }
            init-=1;
        }
    }

return 0;
}


