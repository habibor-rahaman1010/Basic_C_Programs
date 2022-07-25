//find out positive or negative number as input from use in c program....
#include <stdio.h>

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    if(n >= 0){
        printf("The number is positiv! \n");
    }
    else{
        printf("The number is nagetive! \n");
    }

return 0;
}
