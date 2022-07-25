//array descending order in c
#include <stdio.h>
int main() {
    int temp, i, j;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(i = 0, j = 9; i < 10; i++, j--){
        if(arr[j] < arr[i]){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d \n", arr[i]);
    }

return 0;
}
