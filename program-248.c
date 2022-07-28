// namta print 1 to 10 use 2D array in c program...

#include <stdio.h>
#define rows 10
#define cols 10

void print_namta(int namta[rows][cols]) {
    int row, col;

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            namta[row][col] = (row + 1) * (col + 1);
        }
    }

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            printf("%d X %d =  %d \n",(row + 1), (col + 1), namta[row][col]);
        }
        printf("\n \n");
    }

}


int main() {
    int namta[rows][cols];
    print_namta(namta);

return 0;
}
