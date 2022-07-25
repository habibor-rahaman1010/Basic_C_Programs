// 1 to n odd negative number number findout in c program as input form user....

#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your odd negative number: ");
    scanf("%d", &n);

   if(n < 0){
     while(init >= n){
        if(n % 2 != 0){
            printf("%d \n", n);
        }
        n++;
    }
   }
   else{
    printf("please enter neagtive number! \n");
   }

return 0;
}


