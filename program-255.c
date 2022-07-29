// first array row is copy to second array column in c program use 2D array...

#include <stdio.h>

int swap_array(int arr1[5][5]){
    int r, c, arr2[5][5];

    printf("Content of first array arr1: \n");
    for(r = 0; r < 5; r++){
        for(c = 0; c < 5; c++){
            printf("%d, ", arr1[r][c]);
        }
        printf("\n");
    }

    // start start copy to arr1 in arr2...
    for(r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++){
            arr2[c][r] = arr1[r][c];
        }
    }
    printf("\n \n");


    // start print arr2 array...
    printf("Content of second array arr2: \n");
    for(r = 0; r < 5; r++){
        for(c = 0; c < 5; c++){
            printf("%d, ", arr2[r][c]);
        }
        printf("\n");
    }

return 0;
}



int main() {
    int arr1[5][5] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40, 50},
        {100, 200, 300, 400, 500},
        {1000, 2000, 3000, 4000, 5000},
        {10000, 20000, 30000, 40000, 50000},
    };

    swap_array(arr1);

return 0;
}
