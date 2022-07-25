// +n to -n number print in c program using for loop as input from user...
#include <stdio.h>
int main() {
    int i;
    int limit;
    printf("nter your limit number: ");
    scanf("%d", &limit);

    for(i = limit; i >= -limit; i--){
        printf("%d \n", i);
    }

return 0;
}
