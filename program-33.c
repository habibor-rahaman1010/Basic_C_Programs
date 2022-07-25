//multiple if else if condition in c program..
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age as a input here: ");
    scanf("%d", &age);

    if(age < 2){
        printf("You are a 'Infant'");
    }
    else if(age >= 2 && age < 10){
        printf("You are a 'Child'");
    }
    else if(age >= 10 && age < 20){
        printf("You are a 'Teenager'");
    }
     else if(age >= 20 && age < 30){
        printf("You are a 'Adult Younger'");
    }
     else if(age >= 30 && age < 40){
        printf("You are a 'Adult of middle'");
    }
     else if(age >= 40 && age < 50){
        printf("You are a 'Adult of old'");
    }
    else if(age >= 50 && age < 60){
        printf("You are a 'Old Man'");
    }
    else{
        printf("You are a 'Pure Old Man'");
    }
    return 0;
}
