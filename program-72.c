// positive or negative number findout use function as input from user in c program
#include <stdio.h>
#include <stdbool.h>

int positiveNegativ(int num) {
    bool t = true, f = false;
    if(num >= 0) {
        return t;
    }
    else{
        return f;
    }

}

void detectNumber(bool x) {
    if(x == true){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
}

int main() {

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    bool result = positiveNegativ(num);
    detectNumber(result);

return 0;
}


