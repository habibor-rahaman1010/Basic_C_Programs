// 3 numbers of permutation in c program....

#include <stdio.h>
int main() {
    int x, y, z, num;
    printf("Enter your integer number: ");
    scanf("%d", &num);

    if(num < 10){
        for(x = 1; x <= num; x++){

            for(y = 1; y <= num; y++){

                for(z = 1; z <= num; z++){

                    if(x != y && x != z && y != z){
                        printf("%d %d %d \n", x, y, z);
                    }
                }
            }
        }
    }
    else{
        printf("Enter your integer number less then 10 \n");
    }

return 0;
}

