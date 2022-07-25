//print -n to -2 negative even number using while loop in c program
#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your n number: ");
    scanf("%d", &n);

    if(n < 0){
        while(init >= n){
            int remainder = (n % 2);
            if(remainder == 0){
                printf("%d \n", n);
            }
        n+=1;
    }
   }
    else{
        n = -n;
        while(init >= n){
            int remainder = (n % 2);
            if(remainder == 0){
                printf("%d \n", n);
        }
        n+=1;
    }
   }

return 0;
}




