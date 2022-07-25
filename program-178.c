//Celsius to Farenheit in c program...
#include <stdio.h>
int main() {
    double celsius, farenhite;
    printf("Enter your celsius temperature as input here: ");
    scanf("%lf", &celsius);

    farenhite = (1.8 * celsius + 32);
    printf("temperature in farenheit is %0.2lf", farenhite);

return 0;
}
