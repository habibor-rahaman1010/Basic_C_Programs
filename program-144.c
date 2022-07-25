// -n to +n negative odd number find out in c program... overflow small to big..

#include <stdio.h>
int main() {
    int i, num, end;
    printf("Enter your negative intiger n number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("Please enter your negative intiger n number! \n");
    }
    else{
        for(i = num; i <= -num; i += 1){
            if(i % 2 != 0){
                printf("%d \n", i);
            }
        }
    }


return 0;
}


