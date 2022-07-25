//OR condition use in c program...
#include <stdio.h>
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num >= 5 || num <= 30){
        printf("Yes");
    }
    else{
        printf("no");
    }

return 0;
}
