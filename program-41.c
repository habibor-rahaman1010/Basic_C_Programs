//switch case in c program input from by user.....

#include <stdio.h>

int main() {
    int x;
    printf("Enter your swith case value here: \n");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("value is : %d \n", x);
            break;

        case 2:
            printf("value is : %d \n", x);
            break;

        case 3:
            printf("value is : %d \n", x);
            break;

        case 4:
            printf("value is : %d \n", x);
            break;

        case 5:
            printf("value is : %d \n", x);
            break;

        case 6:
            printf("value is : %d \n", x);
            break;

        case 7:
            printf("value is : %d \n", x);
            break;

        default:
            printf("Value %d is unknown, dont\'t match any cases! \n", x);
    }

return 0;
}

