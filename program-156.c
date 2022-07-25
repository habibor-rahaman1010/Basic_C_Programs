//print n number numta in c program using different style for loop..

#include <stdio.h>
int main() {
    int i = 1, num;
    printf("Enter your n number: ");
    scanf("%d", &num);

    for(; ;){
        printf("%d x %d = %d \n", num, i, (num * i));
        i++;

        if(i > 10){
            break;
        }
    }

return 0;
}
