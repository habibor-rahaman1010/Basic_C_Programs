//nested if else condition in c program....
#include <stdio.h>

int main() {
    char ch;
    printf("Enter your your first character: \n");
    scanf("%c", &ch);

    if(ch == 'H' || ch == 'h'){
        printf("You are habib! \n");
    }
    else if(ch == 'B' || ch == 'b'){
        printf("Your have a banana! \n");
    }
    else if(ch == 'C' || ch == 'c'){
        printf("Your have a computer! \n");
    }
    else if(ch == 'M'|| ch == 'm'){
        printf("Your have a mobile! \n");
    }
    else if(ch == 'P' || ch == 'p'){
        printf("Yor are good programmer! \n");
    }
    else if(ch == 'I' || ch == 'i'){
        printf("You are intelligent! \n");
    }
    else{
        printf("Unless you are nothing, you just knowing and learning! \n");
    }

return 0;
}
