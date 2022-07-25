//thake one person age as a input from user and return her biograpy in c program....
#include <stdio.h>

int main(){
    int x;
    printf("Enter age of a person here: \n");
    scanf("%d", &x);

    if(x >= 0 && x <= 5){
        printf("He or She is Infant! \n");
    }

    else if(x >= 6 && x <= 10) {
         printf("He or She is Child! \n");
    }

     else if(x >= 11 && x <= 20) {
         printf("He or She is Teenager! \n");
    }

     else if(x >= 21 && x <= 30) {
         printf("He or She is Young! \n");
    }

    else if(x >= 31 && x <= 40) {
         printf("He or She is semi Young! \n");
    }

     else if(x >= 41 && x <= 55) {
         printf("He or She is semi old! \n");
    }

    else{
     printf("He or She is totally old! \n");
    }

return 0;
}
