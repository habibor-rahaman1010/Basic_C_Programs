//find out min element in an array use function in c program...
#include <stdio.h>

int find_min_element(int arr[], int arr_length);

int main() {
    int arr[] = {34, 29, 56, 67, 78, 11, 17, 32, 9, 12};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int result = find_min_element(arr, arr_length);
    printf("%d", result);

return 0;
}

int find_min_element(int arr[10], int arr_length){
    int min_element = arr[0];
    for(int i = 0; i < arr_length; i++){
        int element = arr[i];
        if(element < min_element ){
            min_element = element;
        }
    }
    return min_element;
}
