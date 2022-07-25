//if else condition in C program.... OR condition
#include <stdio.h>
int main(){
    int x = 30;
    if((x != 25 || x == 20 || x <= 50) && (x == 30 && x >! 35)){
        printf("This condition is True!");
    }
    else{
        printf("Condition is False!");
    }
    return 0;
}
