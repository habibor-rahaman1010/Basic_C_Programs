// find out row summation and col summation in 2D array...
#include <stdio.h>

int sum_row(int arr[5][5]) {
    int row, col;
    for(col = 0; col < 5; col++){
        int result = 0;
        for(row = 0; row < 5; row++){
            result += arr[col][row];
        }
        printf("Sum of row %d -> %d \n", col + 1, result);
    }
    printf("\n");
return 0;
}


int sum_col(int arr[5][5]) {
    int row, col;
    for(row = 0; row < 5; row++){
        int result = 0;
        for(col = 0; col < 5; col++){
            result += arr[col][row];
        }
        printf("Sum of col %d -> %d \n", row + 1, result);
    }

return 0;
}

 int main() {
     int arr[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
     };

    sum_row(arr);

    sum_col(arr);

 return 0;
 }
