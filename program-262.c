//Program in C to print the Vertical Curve Pattern
#include <stdio.h>

void draw_piramid(int row) {
    int i, j;
    for(i = 0; i < row; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

}

void draw_piramid2(int row) {
    int i, j;
    for(i = row; i > 0; i--){
        for(j = 1; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

}


int main() {
    int row;
    printf("Enter number of row your Piramid: ");
    scanf("%d", &row);
    draw_piramid(row);
    draw_piramid2(row);

return 0;
}


