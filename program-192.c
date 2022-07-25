//student result calculation in c program and find out which number who gets how much...
#include <stdio.h>
int main() {
    int i, marks, count;
    double total_marks[40];

    int ft_marks[40] = {34, 56, 67, 78, 89, 90, 65, 43, 45, 47, 76, 89, 89, 90, 93, 42, 54, 67, 78, 80,
    34, 56, 67, 78, 89, 90, 65, 93, 45, 47, 76, 89, 89, 40, 93, 42, 54, 67, 78, 70
    };

    int st_marks[40] = {34, 56, 67, 78, 89, 90, 65, 43, 45, 47, 76, 89, 89, 90, 93, 42, 54, 77, 78, 80,
    34, 56, 67, 78, 89, 90, 65, 43, 45, 97, 76, 89, 89, 90, 93, 72, 54, 67, 78, 50
    };

    int final_marks[40] = {34, 56, 67, 78, 89, 90, 65, 43, 45, 47, 96, 89, 89, 90, 93, 42, 54, 67, 78, 80,
    34, 56, 67, 78, 89, 90, 65, 43, 45, 47, 76, 89, 89, 90, 93, 42, 84, 67, 78, 70
    };

    for(i = 0; i < 40; i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for(marks = 34; marks <= 100; marks++){
        count = 0;
        for(i = 0; i < 40; i++){
            if((int) total_marks[i] == marks){
                count++;
            }
        }
        if(count != 0){
            printf("marks: %d count: %d \n", marks, count);
        }
    }

return 0;
}

