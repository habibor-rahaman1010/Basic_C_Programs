// N numbers namta in c program....
#include <stdio.h>
int main() {
    int i, n, num;
    printf("Enter your number: ");
    scanf("%d", &num);

    for(n = 1; n <= num; n++){
        int res=0;
        for(i = 1; i <= 10; i++){
            res+=n;
            printf("%d x %d = %d \n", n, i,res);
        }
        printf("\n");
    }

return 0;
}
