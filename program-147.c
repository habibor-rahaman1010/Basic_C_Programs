//print negative to positive number in c program...
#include <stdio.h>
int main() {
    int i, num;
    printf("Enter your negative number: ");
    scanf("%d", &num);

    if(num > 0){
       printf("Please enter your negative number! \n");
    }
    else{
        for(i = num; i <= -num; i++){
            printf("%d \n", i);
        }
    }

return 0;
}

