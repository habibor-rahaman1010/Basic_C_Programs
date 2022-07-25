///C program to find the number of times an element is present in an array।

#include <stdio.h>
int main() {
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 66, 77,
    72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 76, 95, 91, 90, 88, 55, 86
    };

    int arr_length = sizeof(total_marks) / sizeof(total_marks[0]); ///find out arr length....
    int i, marks_count[101];

    for(i = 0; i < 101; i++){
        marks_count[i] = 0;
        printf("%d \n", marks_count[i]);
    }

    for(i = 0; i < arr_length; i++){
        marks_count[total_marks[i]]++;
    }

    for(i = 50; i <= 100; i++){
        if(marks_count[i] != 0){
            printf("Marks: %d Count: %d \n", i, marks_count[i]);
        }
    }

return 0;
}
