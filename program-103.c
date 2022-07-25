//print -2 to n negative even number using while loop in c program
#include <stdio.h>
int main() {
    int n, init = -1;
    printf("Enter your n number: ");
    scanf("%d", &n);

    if(n < 0){
        while(n <= init){
            int remainder = (init % 2);
            if(remainder == 0){
                printf("%d \n", init);
            }
        init-=1;
    }
   }
   else{
        printf("Please enter as input -n number \n");
   }

return 0;
}


