// increment or decrement in c program...
#include <stdio.h>

int main() {
    int x = 6;
    x += 10;  //that means x  = x + 10
    printf("value of x is: %d \n", x);

    int b = 16;
    b -= 10;  //that means b  = b - 10
    printf("value of x is: %d \n", b);

    int y = 17;
    y++; //that means after increase 1  y++ and (y + 1) they are same...
    printf("value of y is: %d \n", y);

    int z = 17;
    ++z; //that means befor increase 1  ++z and (z + 1) they are same...
    printf("value of z is: %d \n", z);

    int n = 10;
    n--; //that means after decrease 1  n++ and (n - 1) they are same...
    printf("value of n is: %d \n", n);

    int m = 10;
    --m; //that means befor decrease 1 --m and (m - 1) they are same...
    printf("value of m is: %d \n", m);

return 0;
}
