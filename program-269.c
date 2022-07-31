// array sort in c program...
#include <stdio.h>

int array_sort(int arr1[10]) {
    int i, j, temp;

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(arr1[j] < arr1[i]){
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    // print my arr2 sorted array...
    for(i = 0; i < 10; i++){
        printf("%d \n", arr1[i]);
    }
}

int main() {
    int arr1[10] = {3, 2, 1, 5, 4, 6, 9, 7, 8, 10};
    array_sort(arr1);

return 0;
}

