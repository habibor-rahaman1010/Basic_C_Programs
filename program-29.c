//create a namta input from user in c program...

#include <stdio.h>

int main() {
    int i, base;
    printf("Enter your namta as a inpute your namta number: \n");
    scanf("%d", &base);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d \n", base, i, (base * i));
    }

return 0;
}
