//increment to 1 run 10 times in c program...
#include <stdio.h>
int main() {
    int num;
    printf("Enter your initial value: ");
    scanf("%d", &num);

    while(1){
        printf("%d \n", num);
        num++;
        if(num > 10){
            break;
        }
    }

return 0;
}

