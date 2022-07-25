//find out even number use break in c program...

#include <stdio.h>
int main(){
    int i, num;
    printf("Enter your integer number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
            if(i >= 15){
                break;
            }
        }
    }

return 0;
}
