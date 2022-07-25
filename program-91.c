//print n to 1 positive number using while loop in c program
#include <stdio.h>
int main() {
    int init, end = 1;
    printf("Enter your n number: ");
    scanf("%d", &init);

    while(end <= init){
        printf("%d \n", init);
        init-=1;
    }

return 0;
}

