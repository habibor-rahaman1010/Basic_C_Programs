// binary to decimal number convert in c program....
# include <stdio.h>
#include <string.h>
#include <math.h>

int convert_decimal(char binary[100]) {
    int i, length, decimal, power;
    printf("Enter your binary number: ");
    scanf("%s", binary);
    decimal = 0;
    length = strlen(binary);
    power = length - 1;

    for(i = 0; i < length; i++){
        decimal += (binary[i] - '0') * pow(2, power);  // '0' - '0' = 48 - 48 = 0 and '1' - '0' = 49 - 48 = 1
        power--;
    }

    return decimal;
}

int main() {
    char binary[100];
    int result = convert_decimal(binary);
    printf("%d", result);

return 0;
}
