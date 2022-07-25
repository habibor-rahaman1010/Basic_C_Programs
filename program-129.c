// 100 to 1 number print in c program using for loop as input from user...
#include <stdio.h>
int main() {
    int init, end = 1;
    printf("Enter your initial number: ");
    scanf("%d", &init);

    for(init; init >= end; init--){
        printf("%d \n", init);
    }

return 0;
}
