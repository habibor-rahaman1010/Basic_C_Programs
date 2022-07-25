// 3 numbers of permutation in c program....

#include <stdio.h>
int main() {
    int x, y, z;

    for(x = 1; x <= 3; x++){

        for(y = 1; y <= 3; y++){

            for(z = 1; z <= 3; z++){

                if(x != y && x != z && y != z){
                    printf("%d %d %d \n", x, y, z);
                }
            }
        }
    }

return 0;
}
