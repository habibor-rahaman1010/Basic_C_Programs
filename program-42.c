//switch case in c program input from by user.....

#include <stdio.h>


int main() {
    char ch;
    printf("Enter your switch case value here: \n");
    scanf("%c", &ch);


    switch(ch){
        case 'h':
        printf("Habib is humble boy! \n");
        break;

        case 'w':
        printf("Wahid is good boy! \n");
        break;

        case 't':
        printf("Tarek is good boy! \n");
        break;

        case 's':
        printf("Siyam is funny boy! \n");
        break;

        case 'r':
        printf("Rifat is honnest boy! \n");
        break;

        case 'a':
        printf("Arafat is good boy! \n");
        break;

        case 'y':
        printf("Yeasin arafat shawon is highper boy! \n");
        break;

       default:{
            printf("Hello guys we are all about fine!");
       }
    }

return 0;
}


