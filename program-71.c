// two number addition program use function in c program....
#include <stdio.h>

int math(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 20;
    int num2 = 15;
    int result = math(num1, num2);
    printf("Summation is: %d", result);
return 0;
}
