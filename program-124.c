// print n namta in c program...

#include <stdio.h>
int main() {
    int init = 1, base;
    printf("Enter your base number: ");
    scanf("%d", &base);

    while(init <= 10){
        printf("%d x %d = %d \n", base, init, (base * init));
        init++;
    }

return 0;
}
