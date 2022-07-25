// swaping in c program...

#include <stdio.h>

int main() {
    int x, y, tamp;
    x = 40;
    y = 60;
    tamp = y;
    y = x;
    x = tamp;
    printf("Swape value is: x = %d, y = %d", x, y);

return 0;
}
