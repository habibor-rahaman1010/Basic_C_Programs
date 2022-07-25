// if else if condition in c program...

#include <stdio.h>
int main() {
    int num;
    printf("Enter your number less then 30: ");
    scanf("%d", &num);

    if(num < 30){
        printf("%d is less then 30 \n", num);
    }
    else if(num < 50){
        printf("%d is less then 50 \n", num);
    }


return 0;
}
