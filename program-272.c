//position moving in c program...
#include <stdio.h>

int position_move() {
    int x, y;
    char c;
    printf("Enter your initial position value: ");
    scanf("%d %d", &x, &y);
    printf("Enter your available command is: 'S', 'U', 'D', 'L', 'R': ");

    while(1){
        scanf("%c", &c);

        if(c == 'S' || c == 's'){
            break;
        }

        else if(c == 'U' || c == 'u'){
            x--;
        }

        else if(c == 'D' || c == 'd'){
            x++;
        }

        else if(c == 'L' || c == 'l'){
            y--;
        }

        else if(c == 'R' || c == 'r'){
            y++;
        }
    }
    printf("Final position of the robot is: x = %d, y = %d", x, y);

return 0;
}

int main() {
    position_move();

return 0;
}
