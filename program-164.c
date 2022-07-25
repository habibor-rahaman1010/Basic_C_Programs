// 3 number of nested loop in c program....
#include <stdio.h>
int main() {
    int i, j, k, num;
    printf("Enter your integer number: ");
    scanf("%d", &num);

    if(num <= 10){
        for(i = 1; i <=num; i++){

            for(j = 1; j <= num; j++){

                for(k = 1; k <= num; k++){
                    printf("%d %d %d \n", i, j, k);
                }
            }
        }
    }
    else{
        printf("Please enter your number must be small less then 10 \n");
    }

return 0;
}

