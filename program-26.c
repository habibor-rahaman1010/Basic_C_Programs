// detect even or odd number in c program from use....
#include <stdio.h>

int main() {
    int x;
    printf("Enter your number: \n");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("%d is even number \n", x);
    }
    else{
        printf("%d is odd number \n", x);
    }

return 0;
}
