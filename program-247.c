// 2 dimensional array in c program counting student result...
#include <stdio.h>
#define row 3
#define cloumn 4

int final_sresult(int marks[row][cloumn]){
    int i, j;
    int final_marks[row][cloumn];
    printf("Enter your result: ");

    for(i = 0; i < row; i++){
        for(j = 0; j < cloumn; j++){
             scanf("%d", &marks[i][j]);
        }
    }

    printf("hello programmer...... \n \n");


    for(i = 0; i < cloumn; i++){
        final_marks[0][i] = marks[0][i] / 4.0 + marks[1][i] / 4.0 + marks[2][i] / 2.0;
        printf("Roll No: %d Total marks: %d \n", i + 1, final_marks[0][i]);
    }
}


int main() {
    int marks[row][cloumn];
    final_sresult(marks);

return 0;
}


