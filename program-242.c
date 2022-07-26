// prime number in  c program....
#include <stdio.h>

int is_prime(int n) {
    if(n < 2){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else if(n % 2 == 0){
        return 0;
    }
    else{
        int i;
        for(i = 3; i <= n/2; i+=2) {
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}


int main() {
    int n;

    while(1){
        printf("Please enter your number: ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        else if(1 == is_prime(n)){
            printf("%d is prime number. \n", n);
        }
        else{
             printf("%d is not prime number. \n", n);
        }
    }
    printf("Program in terminate!");

return 0;
}
