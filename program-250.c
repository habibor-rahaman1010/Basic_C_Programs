// namta print 1 to 10 use 2D array and find out even and odd number and then total namta summation in c program...

#include <stdio.h>
#define rows 10
#define cols 10

void print_namta(int namta[rows][cols]) {
    int row, col;

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            namta[row][col] = (row + 1) * (col + 1);
        }
    }

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            printf("%d X %d =  %d \n",(row + 1), (col + 1), namta[row][col]);
        }
        printf("\n \n");
    }

    // how many numbers even and odd have in the namta array find out....
    int even = 0, odd = 0, total_sum = 0;

    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            namta[row][col] = (row + 1) * (col + 1);
            if(namta[row][col] % 2 == 0){
                even += 1;
            }
            else{
                odd += 1;
            }
            total_sum = total_sum +  namta[row][col];
        }
    }

    printf("%d even number hold in namta array! \n", even);
    printf("%d odd number hold in namta array! \n", odd);
    printf("%d total sum in namta array! \n", total_sum);
}


int main() {
    int namta[rows][cols];
    print_namta(namta);

return 0;
}

