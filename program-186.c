//array data structure in c program....
#include <stdio.h>
int main() {
    int data, data2, data3, data4, data5, data6;
    int arr[5] = {12, 34, 45, 66, 78};

    data = arr[1];
    printf("First element is: %d \n", data);

    data2 = arr[-1];
    printf("First element is: %d \n", data2);

    data3 = arr[100];
    printf("First element is: %d \n", data3);

    data4 = arr[5];
    printf("First element is: %d \n", data4);

    data5 = arr[(5 - 1)];
    printf("First element is: %d \n", data5);

    data6 = arr[(1 - 1)];
    printf("First element is: %d \n", data6);


return 0;
}
