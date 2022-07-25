//binary search in an array in c program...
#include <stdio.h>

int binary_search(int arr[20]){
    int low_index = 0;
    int high_index = 20;
    int mid_index;
    int number = 115;

    while(low_index <= high_index){
        mid_index = (low_index + high_index) / 2;
        printf("%d \n", mid_index);

        if(number == arr[mid_index]){
            break;
        }

        if(number < arr[mid_index]){
            high_index = mid_index - 1;
        }
        else{
            low_index = mid_index + 1;
        }
    }

    if(low_index > high_index){
        printf("%d is not in the array \n", number);
    }
    else{
        printf("%d is found in the array. It is the %d index element of the array. \n", arr[mid_index], mid_index);
    }
}

int main() {
    int my_array[20] = {1, 4, 5, 6, 7, 12, 23, 34, 45, 56, 67, 68, 76, 89, 115, 360, 589, 886, 998, 1000};
    binary_search(my_array);

return 0;
}
