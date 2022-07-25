// 1 to 100 number print in c program using for loop as input from user...
#include <stdio.h>
int main() {
    int i;
    int end;
    printf("Enter your end number: ");
    scanf("%d", &end);

    for(i = 1; i <= end; i++){
        printf("%d \n", i);
    }

return 0;
}
