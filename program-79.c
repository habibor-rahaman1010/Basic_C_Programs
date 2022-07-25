//findout odd and even number in c program...
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num % 2 != 0){
        printf("%d is odd number \n", num);
    }
    else{
         printf("%d is even number \n", num);
    }

return 0;
}
