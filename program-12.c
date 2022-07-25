// float vs double in c program...
#include <stdio.h>

int main() {
    printf("float size: %d \n", sizeof(float));
    printf("double size: %d \n", sizeof(double));

    float x, y, result;
    x = 22.78;
    y = 2.32;
    result = (x / y);
    printf("result is: %f \n", result);
    printf("result is: %.2f \n", result);

    x = 4;
    y = 3.0;
    result = (x / y);
    printf("result is: %f \n", result);
return 0;
}
