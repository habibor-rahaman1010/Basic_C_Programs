//findout positive and negative number in c program...

#include <stdio.h>

int main() {
    int num;
    printf("Please enter your number: ");
    scanf("%d", &num);

    if(num < 0){
        printf("%d is negative number! \n", num);
    }
    else if(num > 0){
        printf("%d is positive number! \n", num);
    }
    else{
        printf("%d is not negative or positive number! \n", num);
    }

return 0;
}
