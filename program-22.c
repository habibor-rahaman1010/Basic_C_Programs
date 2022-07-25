// if else condition in C program
#include <stdio.h>

int main(){
    int x = 10;
    // (x > x++),(x >= x),(x+1 > x),(x+=1 > x),(x++ <= x++) there are same and boolean result is True!
    // (x++ > x),(x > x + 1),(x > x),(x++ > x++),(x++ >= x++),(x > ++x) boolean result is False!
    if(x > ++x){
        printf("Conditions is True!");
    }
    else{
        printf("Conditions is False!");
    }
    return 0;
}
