//increment to 1 run infinity loop in c program...
#include <stdio.h>
int main() {
    int num;
    printf("Enter your initial value: ");
    scanf("%d", &num);

    while(1){
        printf("%d \n", num);
        num++;
    }

return 0;
}
