//student GPA find out in c program...
#include <stdio.h>

int main() {
    float gpa;
    float bangla, english, math, science, ict, chemistry, physics, higherMath, calculus, computer;
    printf("Enter your all subject number: \n");
    scanf("%f%f%f%f%f%f%f%f%f%f", &bangla, &english, &math, &science, &ict, &chemistry, &physics, &higherMath, &calculus, &computer);

    float bangla1, english1, math1, science1, ict1, chemistry1, physics1, higherMath1, calculus1, computer1;

    //for bangla....
    if(bangla >= 80 && bangla <= 100){
        bangla1 = 5;
    }
    else if(bangla >= 70 && bangla <= 79){
        bangla1 = 4;
    }
     else if(bangla >= 60 && bangla <= 69){
        bangla1 = 3.5;
    }
     else if(bangla >= 50 && bangla <= 59){
        bangla1 = 3;
    }
     else if(bangla >= 40 && bangla <= 49){
        bangla1 = 2.5;
    }
     else if(bangla >= 33 && bangla <= 39){
        bangla1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for english...
      if(english >= 80 && english <= 100){
        english1 = 5;
    }
    else if(english >= 70 && english <= 79){
        english1 = 4;
    }
     else if(english >= 60 && english <= 69){
        english1 = 3.5;
    }
     else if(english >= 50 && english <= 59){
        english1 = 3;
    }
     else if(english >= 40 && english <= 49){
        english1 = 2.5;
    }
     else if(english >= 33 && english <= 39){
        english1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for math
      if(math >= 80 && math <= 100){
        math1 = 5;
    }
    else if(math >= 70 && math <= 79){
        math1 = 4;
    }
     else if(math >= 60 && math <= 69){
        math1 = 3.5;
    }
     else if(math >= 50 && math <= 59){
        math1 = 3;
    }
     else if(math >= 40 && math <= 49){
        math1 = 2.5;
    }
     else if(math >= 33 && math <= 39){
        math1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for science
      if(science >= 80 && science <= 100){
        science1 = 5;
    }
    else if(science >= 70 && science <= 79){
        science1 = 4;
    }
     else if(science >= 60 && science <= 69){
        science1 = 3.5;
    }
     else if(science >= 50 && science <= 59){
        science1 = 3;
    }
     else if(science >= 40 && science <= 49){
        science1 = 2.5;
    }
     else if(science >= 33 && science <= 39){
        science1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for ict
      if(ict >= 80 && ict <= 100){
        ict1 = 5;
    }
    else if(ict >= 70 && ict <= 79){
        ict1 = 4;
    }
     else if(ict >= 60 && ict <= 69){
        ict1 = 3.5;
    }
     else if(ict >= 50 && ict <= 59){
        ict1 = 3;
    }
     else if(ict >= 40 && ict <= 49){
        ict1 = 2.5;
    }
     else if(ict >= 33 && ict <= 39){
        ict1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for chemistry...
      if(chemistry >= 80 && chemistry <= 100){
        chemistry1 = 5;
    }
    else if(chemistry >= 70 && chemistry <= 79){
        chemistry1 = 4;
    }
     else if(chemistry >= 60 && chemistry <= 69){
        chemistry1 = 3.5;
    }
     else if(chemistry >= 50 && chemistry <= 59){
        chemistry1 = 3;
    }
     else if(chemistry >= 40 && chemistry <= 49){
        chemistry1 = 2.5;
    }
     else if(chemistry >= 33 && chemistry <= 39){
        chemistry1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for physics
      if(physics >= 80 && physics <= 100){
        physics1 = 5;
    }
    else if(physics >= 70 && physics <= 79){
        physics1 = 4;
    }
     else if(physics >= 60 && physics <= 69){
        physics1 = 3.5;
    }
     else if(physics >= 50 && physics <= 59){
        physics1 = 3;
    }
     else if(physics >= 40 && physics <= 49){
        physics1 = 2.5;
    }
     else if(physics >= 33 && physics <= 39){
        physics1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for higherMath
      if(higherMath >= 80 && higherMath <= 100){
        higherMath1 = 5;
    }
    else if(higherMath >= 70 && higherMath <= 79){
        higherMath1 = 4;
    }
     else if(higherMath >= 60 && higherMath <= 69){
        higherMath1 = 3.5;
    }
     else if(higherMath >= 50 && higherMath <= 59){
        higherMath1 = 3;
    }
     else if(higherMath >= 40 && higherMath <= 49){
        higherMath1 = 2.5;
    }
     else if(higherMath >= 33 && higherMath <= 39){
        higherMath1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for calculus
      if(calculus >= 80 && calculus <= 100){
        calculus1 = 5;
    }
    else if(calculus >= 70 && calculus <= 79){
        calculus1 = 4;
    }
     else if(calculus >= 60 && calculus <= 69){
        calculus1 = 3.5;
    }
     else if(calculus >= 50 && calculus <= 59){
        calculus1 = 3;
    }
     else if(calculus >= 40 && calculus <= 49){
        calculus1 = 2.5;
    }
     else if(calculus >= 33 && calculus <= 39){
        calculus1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }


    //for computer
      if(computer >= 80 && computer <= 100){
        computer1 = 5;
    }
    else if(computer >= 70 && computer <= 79){
        computer1 = 4;
    }
     else if(computer >= 60 && computer <= 69){
        computer1 = 3.5;
    }
     else if(computer >= 50 && computer <= 59){
        computer1 = 3;
    }
     else if(computer >= 40 && computer <= 49){
        computer1 = 2.5;
    }
     else if(computer >= 33 && computer <= 39){
        computer1 = 2;
    }
    else{
        printf("So sorry, you are faild! \n");
    }

    printf("Bangla: %.2f \n", bangla1);
    printf("English %.2f \n", english1);
    printf("Math: %.2f \n", math1);
    printf("Science: %.2f \n", science1);
    printf("ICT: %.2f \n", ict1);
    printf("Chemistry: %.2f \n", chemistry1);
    printf("Physics: %.2f \n", physics1);
    printf("Higher Math: %.2f \n", higherMath1);
    printf("Calculus: %.2f \n", calculus1);
    printf("Computer: %.2f \n \n", computer1);

    gpa = ((bangla1 + english1 + math1 + science1 + ict1 + chemistry1 + physics1 + higherMath1 + calculus1 + computer1) / 10.0);
    printf("Total GPA: %.2f \n", gpa);

return 0;
}
