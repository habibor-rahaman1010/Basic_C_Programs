//print positive to negative number in c program...
#include <stdio.h>
int main() {
    int i, num;
    printf("Enter your positive number: ");
    scanf("%d", &num);

    for(i = num; i >= -num; i--){
        printf("%d \n", i);
    }

return 0;
}
