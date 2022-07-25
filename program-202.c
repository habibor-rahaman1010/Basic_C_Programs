// two number summation in c program use function...
#include <stdio.h>

double add(double num, double num2){
    double sum = num + num2;
    return sum;
}

int main(){
    double a, b, result;
    a = b = 2.5;
    result = add(a, b);
    printf("Summation is: %.2lf", result);

return 0;
}

