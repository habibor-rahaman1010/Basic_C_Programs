// namta print 1 to 10 use 2D array in c program...

#include <stdio.h>

void print_namta(int namta[10][10]) {
    int row, col;

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            namta[row][col] = (row + 1) * (col + 1);
            printf("%d X %d =  %d \n",(row + 1), (col + 1), namta[row][col]);
        }
        printf("\n \n");
    }

}


int main() {
    int namta[10][10];
    print_namta(namta);

return 0;
}

