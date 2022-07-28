// 2 dimensional array in c program counting student result...
#include <stdio.h>

int result_count(int marks[4][10]) {
    int i;
    for(i = 0; i < 10; i++){
        marks[3][i] = marks[0][i] / 4.0 + marks[1][i] / 4.0 + marks[2][i] / 2.0;
        printf("Roll No: %d total marks: %d \n", i + 1, marks[3][i]);
    }

}

int main() {

    int marks[4][10] = {
        {80, 90, 89, 87, 67, 76, 74, 84, 78, 100},
        {89, 93, 100, 78, 53, 78, 99, 87, 89, 87},
        {56, 67, 98, 89, 90, 92, 73, 82, 83, 100},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    result_count(marks);

return 0;
}
