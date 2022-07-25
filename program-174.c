// 1 + 2 +3 + 4 + 5.....+n series of addition....
#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter your n number here: ");
    scanf("%d", &n);

    sum = (n * (n + 1) / 2);
    printf("Series of sum = %d", sum);

return 0;
}
