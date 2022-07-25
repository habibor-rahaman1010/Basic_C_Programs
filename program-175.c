// 1 + 2 +3 + 4 + 5.....+n series of summation....
#include <stdio.h>
int main() {
    int i, sum, n;
    printf("Enter your n number here: ");
    scanf("%d", &n);

    for(i = 0, sum = 0; i <= n; i++){
        sum = sum + i;
    }
    printf("Series of n summation is = %d", sum);

return 0;
}
