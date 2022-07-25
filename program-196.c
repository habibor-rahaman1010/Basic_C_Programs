///C program to find the number of times an element is present in an array inputs from user।

#include <stdio.h>
int main() {
    int total_marks[10];
    int x;

    printf("Enter your numbers array min value 33 and max value 100: ");
    for(x = 0; x <= 9; x+=1){
        scanf("%d", &total_marks[x]);
    }

    int arr_length = sizeof(total_marks) / sizeof(total_marks[0]); ///find out arr length....
    int i, marks_count[101];

    for(i = 0; i < 101; i++){
        marks_count[i] = 0;
    }

    for(i = 0; i < arr_length; i++){
        marks_count[total_marks[i]]++;
    }

    for(i = 33; i <= 100; i++){
        if(marks_count[i] != 0){
            printf("Marks: %d Count: %d \n", i, marks_count[i]);
        }
    }

return 0;
}

