//factorial value find out in c program...
#include <stdio.h>

int factorrial(int n) {
    int i, fact_value = 1;

    if(n == 0 || n == 1){
        return 1;
    }
    else{
        for(i = 1; i <= n; i++){
           fact_value *= i;
        }
    }

return fact_value;
}

int main() {
    int n;
    printf("Enter your n factorial number: ");
    scanf("%d", &n);
    int result = factorrial(n);
    printf("%d is a value of factorial %d!", result, n);

return 0;
}
