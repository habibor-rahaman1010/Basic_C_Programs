//max element find out on array in c program inputs from user...

#include <stdio.h>
int main() {
    int i, sum = 0, arr[10];
    int max = arr[0];
    printf("Enter your array number of value is max 10 time:" );

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++){
        int elemnt = arr[i];
        if(elemnt > max){
            max = arr[i];
        }
    }
    printf("Max element is: %d", max);

return 0;
}
