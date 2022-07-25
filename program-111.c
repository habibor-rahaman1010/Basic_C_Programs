// 1 to n odd negative number number findout in c program as input form user....

#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your odd negative number: ");
    scanf("%d", &n);

   if(n < 0){
     while(init >= n){
        if(init % 2 != 0){
            printf("%d \n", init);
        }
        init--;
    }
   }
   else{
    printf("Enter please negative number as a user input! \n");
   }

return 0;
}


