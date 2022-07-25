// -n to -1 number print in c program using for loop as input from user...
#include <stdio.h>
int main() {
    int i;
    int limit = -1;
    printf("nter your negative limit number: ");
    scanf("%d", &limit);
    if( limit > 0){
        printf("Enter As Input Negative Number.... \n");
    }
    else{

        for(i = limit; i <= -1; i++){
            printf("%d \n", i);
        }
    }

return 0;
}


