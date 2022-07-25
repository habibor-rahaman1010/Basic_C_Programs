// n odd number find out in c program... overflow small to big
#include <stdio.h>
int main() {
    int i, num;
    printf("Enter your n integer number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(i % 2 != 0){
            printf("%d \n", i);
        }
    }

return 0;
}
