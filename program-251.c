// store SAARC countries in 2D array in C program....

#include <stdio.h>
#define rows 7
#define cols 100

void print_saarc(char saarc[rows][cols]) {
    int i;
    for(i = 0; i < rows; i++){
        printf("%s \n", saarc[i]);
    }
}

int main () {
    char saarc[rows][cols] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    print_saarc(saarc);

return 0;
}
