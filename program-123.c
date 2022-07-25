// finde odd number by continue use in c program as input from user...

#include <stdio.h>
int main(){
    int n, init = 0;
    printf("Enter your initial integer number: ");
    scanf("%d", &n);

    while(init < n){
        init++;
        if(init % 2 != 0){
            continue;
        }
        printf("%d \n", init);
    }

return 0;
}


