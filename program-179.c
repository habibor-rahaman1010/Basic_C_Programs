//Farenheit to Celsius in c program...
#include <stdio.h>
int main() {
    double farenhite, celsius;
    printf("Enter your farenhite temperature as input here: ");
    scanf("%lf", &farenhite);

    celsius = ((farenhite - 32) * 5 / 9);
    printf("temperature in celsius is %0.2lf", celsius);

return 0;
}
