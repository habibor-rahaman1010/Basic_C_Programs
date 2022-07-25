//it's infinity loop in c program... discribe details in tamim cp books 61 page..
#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter your integer number: ");
    scanf("%d", &n);

    while(i <= n){
        printf("%d \n", i);
        // i++;
    }
    i++;
return 0;
}
