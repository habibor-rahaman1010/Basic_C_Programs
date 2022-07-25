//print -n to -1 negative number using while loop in c program
#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your n nagetive number: ");
    scanf("%d", &n);

    if(n < 0){
        while(n <= init){
            printf("%d \n", init);
            init-=1;
        }
   }
   else{
        printf("Please Enter n nagetive number \n");
    }

return 0;
}
