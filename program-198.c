// array elements summation in c program inputs from user....

#include <stdio.h>
int main() {
    int i, sum = 0, arr[10];
    printf("Enter your array as input: ");

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++){
        int element = arr[i];
        sum += element;
    }
    printf("%d", sum);

return 0;
}

