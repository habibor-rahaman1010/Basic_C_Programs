//factorial value find out in c program...
#include<stdio.h>

long factorial(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return(n * factorial(n-1));
    }

}

int main() {
    int number;
    long fact;
    printf("Enter a number of n: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d! is %ld\n", number, fact);

return 0;
}
