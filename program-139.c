// n negaive even number find out in c program... overflow big to smal
#include <stdio.h>
int main() {
    int i, num, end = -1;
    printf("Enter your negative intiger n number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Please you are enter here neagtive n number! \n");
    }
    else{
        for(i = num; i <= end; i++){
            if(i % 2 == 0){
                printf("%d \n", i);
            }
        }
    }

return 0;
}

