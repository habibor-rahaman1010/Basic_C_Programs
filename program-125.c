//print n namta in c program use for loop...
#include <stdio.h>
int main() {
    int init, base;
    printf("Enter your base number in your namta: " );
    scanf("%d", &base);

    for(init = 1; init <= 10; init+=1){
        printf("%d x %d = %d \n", base, init, (base * init));
        printf("------------ \n");
    }
return 0;
}
