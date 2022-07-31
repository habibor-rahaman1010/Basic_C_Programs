#include <stdio.h>
int main(){
    int grid[20][20];
    int i, j, n;
    int x, y;
    int a, b;
    char c;

    for(i= 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            grid[i][j] = 1;
        }
    }

    printf("Enter the number of blocked cells :");
    scanf("%d", &n);
    printf("Now enter the cells.\n");

    for(i=1; i<=n; i++){
        scanf("%d %d",&x,&y);
        grid[x][y]=0;
    }

    printf("Enter the initial position of the robot :");
    scanf("%d %d",&a,&b);

    if(grid[a][b]==0){
        printf("The cell(%d, %d) is blocked.\n",a,b);
    }

    else{
        printf("Now enter the key(Enter 0 to exit).\n");
        while(1){
            scanf("%c",&c);
            if(c=='0'){
                break;
            }

            else if(c=='U'){
                a--;
                if(grid[a][b]==1){
                    printf("Now the position of the robot is : %d, %d\n",a,b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }

            else if(c=='D'){
                a++;
                if(grid[a][b]==1){
                    printf("Now the position of the robot is : %d, %d\n",a,b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }

            else if(c=='L'){
                b--;
                if(grid[a][b]==1){
                    printf("Now the position of the robot is : %d, %d\n",a,b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }

            else if(c=='R'){
                b++;
                if(grid[a][b]==1){
                    printf("Now the position of the robot is : %d, %d\n",a,b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }

            else if(c=='L'){
                b--;
                if(grid[a][b]==1){
                    printf("Now the position of the robot is : %d, %d\n",a,b);
                }
                else{
                    printf("The cell(%d, %d) is blocked.\n",a,b);
                }
            }
        }
    }
return 0;
}
