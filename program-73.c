//findout positive and negative number in c program....
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num == 0){
        printf("%d is not positiv and not negative \n");
    }
    else if(num > 0){
        printf("The number is positive \n");
    }
    else{
        printf("The number is negative \n");
    }

return 0;
}
