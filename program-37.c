//find out large element in an daynamic array in c program....
#include <stdio.h>

int main() {
    int arr[] = {34, 56, 67, 78, 89, 76, 54, 78, 101, 65, 90};
    int i, max_value = arr[0];
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < arr_len; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
        }
    }
    printf("max value is: %d \n", max_value);


return 0;
}

