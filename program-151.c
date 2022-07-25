//find out odd number use continue in c program...

#include <stdio.h>
int main() {
    int i, num;
    printf("Enter your intiger number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){

        if(i % 2 == 0){
            continue;
        }
        printf("%d \n", i);
    }

return 0;
}

