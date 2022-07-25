//C program to find the number of times an element is present in an array....
#include <stdio.h>
int main() {
    int total_marks[40] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 66, 77,
    72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 76, 95, 91, 90, 88, 55, 86
    };

    int arr_length = sizeof(total_marks)/sizeof(total_marks[0]);
    int marks, i, count;

    for(marks = 50; marks <= 100; marks++){
        count = 0;
        for(i = 0; i < arr_length; i++){
            if(total_marks[i] == marks){
                count++;
            }
        }
        if(count != 0){
            printf("Marks: %d \t %d \n", marks, count);
        }
    }

return 0;
}
