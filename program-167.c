// 3 numbers of permutation in c program....
#include <stdio.h>
int main() {
    int a, b, c, num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num < 10){
        for(a = 1; a <=num; a++){

            for(b = 1; b <= num; b++){

                if(b != a){

                    for(c = 1; c <= num; c++){

                        if(c != a && c != b){
                             printf("%d %d %d \n", a, b, c);
                        }
                    }
                }
            }
        }
    }
    else{
        printf("Enter your number less then 10 \n");
    }

return 0;
}


