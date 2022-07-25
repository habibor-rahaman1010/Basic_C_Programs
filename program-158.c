//print n number numta in c program using different style for loop..

#include <stdio.h>
int main() {
    int i = 1, num, sum = 0;
    printf("Enter your n number: ");
    scanf("%d", &num);

    for(; ;){
        sum = sum + num;
        printf("%d x %d = %d \n", num, i, sum);
        i++;

        if(i > 10){
            break;
        }
    }

return 0;
}

