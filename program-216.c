//pass by reference and pass by value in this program...

#include <stdio.h>

void test_function(int arr[], int x); // it's function prototype...

int main() {
    int arr[10] = {23, 45, 67, 78, 89, 73, 52, 69, 83, 64};
    int x = 10;

    printf("function call before array: %d \n", arr[0]);
    printf("function call before X: %d \n", x);

    test_function(arr, x);
    printf("function call after array: %d \n", arr[0]);
    printf("function call after X: %d \n", x);

return 0;
}

void test_function(int arr2[10], int z){
    arr2[0] = 85;
    z = 14;
    return;
}

