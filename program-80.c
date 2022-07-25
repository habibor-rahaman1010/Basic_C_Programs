//findout odd and even number in c program...
#include <stdio.h>

int main() {
    int num, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);

    remainder = (num % 2);
    if(remainder != 0){
        printf("%d number is odd \n", num);
    }
    else{
        printf("%d number is even \n", num);
    }

return 0;
}

