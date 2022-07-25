// -n to -1 number print in c program using for loop as input from user...
#include <stdio.h>
int main() {
    int i;
    int limit = -1;
    printf("Enter your positive limit number: ");
    scanf("%d", &limit);

    for(i = -limit; i <= -1; i++){
        printf("%d \n", i);
    }

return 0;
}

