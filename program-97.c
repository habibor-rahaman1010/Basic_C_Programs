//print 1 to n positive number using while loop in c program
#include <stdio.h>
int main() {
    int n, init = 1;
    printf("Enter your n number: ");
    scanf("%d", &n);

    while(n >= init){
        printf("%d \n", init);
        init+=1;
    }

return 0;
}

