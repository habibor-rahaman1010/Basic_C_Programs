// integer vs long integer vs long long integer...
#include <stdio.h>
#include <limits.h>

int main() {
    int integer = 2147483647;
    long int longInteger = 2147483648;
    long long longLongInteger = 9223372036854775807;

    printf("%d \n", integer);
    printf("%ld \n", longInteger);
    printf("%lld \n", longLongInteger);

    //check to limits integer...
    printf("my computer integer size: %d \n", sizeof(int));
    printf("The maximum valu of int: %d \n", INT_MAX);
    printf("The maximum valu of int: %d \n", INT_MIN);
    printf("The maximum valu of int: %ld \n", LONG_MAX);
    printf("The maximum valu of int: %ld \n", LONG_MIN);


return 0;
}
