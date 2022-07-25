// print n number namta in c program..

#include <stdio.h>
int main() {
    int i, num, sum = 0;
    printf("Enter your n number: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++){
        sum = sum + num;
        printf("%d x %d = %d \n", num, i, sum);
    }

return 0;
}
