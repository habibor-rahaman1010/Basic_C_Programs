// switch uses in calculator in c program....
#include <stdio.h>

int main() {
    char _operator;
     printf("Enter an operator here: (+, -, *, /): ");
    scanf("%c", &_operator);

    double n1, n2;
    printf("Enter two operend as input here: \n");
    scanf("%lf %lf", &n1, &n2);

    switch(_operator){
        case '+':
            printf("%.0lf + %.0lf = %.0lf", n1, n2, (n1 + n2));
            break;

        case '-':
            printf("%.0lf - %.0lf = %.0lf", n1, n2, (n1 - n2));
            break;

        case '*':
            printf("%.0lf * %.0lf = %.0lf", n1, n2, (n1 * n2));
            break;

        case '/':
            printf("%.0lf / %.0lf = %.1lf", n1, n2, (n1 / n2));
            break;


        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

return 0;
}
