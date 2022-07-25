// the input number divisible 3 or 5 in c program...

#include <stdio.h>

int main() {
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    if(x % 3 == 0 || x % 5 == 0 && x >= 10 && x <= 100){
        printf("The number is divisible by 3 or 5 \n");
    }
    else{
        printf("The number is don\'t divisible by 3 or 5 \n");
    }

return 0;
}
