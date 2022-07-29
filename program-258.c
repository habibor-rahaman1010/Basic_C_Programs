/* C Program to Convert Decimal to Binary */
#include <stdio.h>

int conver_to_binary() {
    int a[100], number, i, j;
    printf("Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);

    for(i = 0; number > 0; i++){
        a[i] = number % 2;
        number = number / 2;
    }
    printf("\n");

    printf("Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  {
        printf("%d ", a[j]);
    }
    printf("\n");


return 0;
}


int main() {
    conver_to_binary();

return 0;
}
