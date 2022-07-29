// store SAARC countries in 2D array in C program....

#include <stdio.h>
#include <string.h>
#define rows 7
#define cols 100

void print_saarc(char saarc[rows][cols]) {
    int i, j, name_length;

    for(i = 0; i < rows; i++){
        name_length = strlen(saarc[i]);

        for(j = 0; j < name_length; j++){
            printf("(row -> %d, col -> %d)  = %c \n",i, j, saarc[i][j]);
        }
        printf("\n");
    }
}

int main () {
    char saarc[rows][cols] = {
        "Bangladesh",
        "India",
        "Pakistan",
        "Sri Lanka",
        "Nepal",
        "Bhutan",
        "Maldives"
        };

    print_saarc(saarc);

return 0;
}


