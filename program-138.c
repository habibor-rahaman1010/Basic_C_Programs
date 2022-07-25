// n negaive even number find out in c program... overflow small to big
#include <stdio.h>
int main() {
    int i, num;
    printf("Enter your negative intiger n number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Please you are enter here neagtive n number! \n");
    }
    else{
        for(i = -1; i >= num; i--){
            if(i % 2 == 0){
                printf("%d \n", i);
            }
        }
    }

return 0;
}
