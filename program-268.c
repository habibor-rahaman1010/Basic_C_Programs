// array sort in c program...
#include <stdio.h>

int array_sort(int arr1[10]) {
    int i, j, minimum, minimum_index, arr2[10];

    for(i = 0; i < 10; i++){
        minimum = 10000;
        for(j = 0; j < 10; j++){
            if(arr1[j] < minimum){
                minimum = arr1[j];
                minimum_index = j;
            }
        }
        arr1[minimum_index] = 10000;
        arr2[i] = minimum;
    }

    // print my arr2 sorted array...
    for(i = 0; i < 10; i++){
        printf("%d \n", arr2[i]);
    }
}

int main() {
    int arr1[10] = {3, 2, 1, 5, 4, 6, 9, 7, 8, 10};
    array_sort(arr1);

return 0;
}
