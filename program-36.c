//find out large element in an static array in c program....
#include <stdio.h>

int main() {
    int arr[10] = {34, 56, 67, 78, 89, 76, 54, 78, 65, 90};
    int i, max_value = arr[0];

    for(i = 0; i < 10; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
        }
    }
    printf("max value is: %d \n", max_value);


return 0;
}
