// if else condition in c program... OR Condition
#include <stdio.h>
int main(){
    char x = 'K';
    if((x == 'K' || x > 'k') && x == 'g' || x != 'g'){
        printf("This is condition is True");
    }
    else{
        printf("This condition is False");
    };
    return 0;
}
