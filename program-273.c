//position moving in c program...
#include <stdio.h>

int position_move() {
    int grid[10][10];
    int i, j, n;
    int x, y;
    int a, b;
    char c;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            grid[i][j] = 1;
        }
    }

    printf("Enter the number of blocked cells: ");
    scanf("%d", &n);
    printf("Now enter the cells.\n");

    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }


    printf("Enter your initial position of robot: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    if(grid[a][b] == 0){
        printf("The cell(%d, %d) is blocked.\n", a, b);
    }

    else{
        printf("Enter your available command is: 'S', 'U', 'D', 'L', 'R': ");
        while(1){
            scanf("%c", &c);

            if(c == 'S' || c == 's'){
                break;
            }

            else if(c == 'U' || c == 'u'){
                a--;
                if(grid[a][b] == 1){
                    printf("Now the position of the robot is : %d, %d\n", a, b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }


            else if(c == 'D' || c == 'd'){
                a++;
                if(grid[a][b] == 1){
                    printf("Now the position of the robot is : %d, %d\n", a, b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n", a, b);
                }
            }

            else if(c == 'L' || c == 'l'){
                b--;
                if(grid[a][b] == 1){
                    printf("Now the position of the robot is : %d, %d\n", a, b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n", a, b);
                }
            }

            else if(c == 'R' || c == 'r'){
                b++;
                if(grid[a][b] == 1){
                    printf("Now the position of the robot is : %d, %d\n", a, b);
                }
                else{
                     printf("The cell(%d, %d) is blocked.\n", a, b);
                }
            }
        }
    }
}

int main() {
    position_move();

return 0;
}
