//half pyramid draw in c program
#include <stdio.h>

void draw_pyramid(int row) {
    int i, j;
    for(i = 0; i < row; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

}


int main() {
    int row;
    printf("Enter number of row your Piramid: ");
    scanf("%d", &row);
    draw_pyramid(row);

return 0;
}

