//half revers pyramid draw in c program
#include <stdio.h>

void draw_pyramid(int row) {
    int i, j;
    for(i = row; i > 0; i--){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

}


int main() {
    int row;
    printf("Enter number of row your pyramid: ");
    scanf("%d", &row);
    draw_pyramid(row);

return 0;
}
