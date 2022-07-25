// two number summation in c program use function...
#include <stdio.h>

int add(int num, int num2); // it's function prototype...

int main(){
    int a, b, result;
    a = b = 5;
    result = add(a, b);
    printf("Summation is: %d", result);

return 0;
}

int add(int num, int num2){
    int sum = num + num2;
    return sum;
}

