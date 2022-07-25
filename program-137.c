// n even number find out in c program... overflow big to small..
#include <stdio.h>
int main() {
    int i, num, end = 1;
    printf("Enter your poditive n number: ");
    scanf("%d", &num);

    for(i = num; i >= end; i -= 1) {
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }

}
