// prime number in  c program....
#include <stdio.h>
#include <math.h>

const int size = 40;
int arr[40];

void print_arr(){
    int i;
    for(i = 2; i <= size; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    for(i = 2; i <= size; i++){
        printf("----");
    }
    printf("\n");

    for(i = 2; i <= size; i++){
        printf("%4d", i);
    }
    printf("\n \n \n");
}


void sieve() {
    int i, j, root;

    for(i = 2; i <= size; i++) {
        arr[i] = 1;
    }
    root = sqrt(size);
    print_arr();

    for(i = 2; i <= root; i++){
        if(arr[i] == 1){
            for(j = 2; i * j <= size; j++){
                arr[i * j] = 0;
            }
            print_arr();
        }
    }
}

int is_prime(int n){
    if(n < 2){
        return 0;
    }
    else{
        printf("%d \n", arr[n]);
        return arr[n];
    }
}


int main () {
    int n, m;
    sieve();

    while(1){
        printf("Enter a number (Enter 0 to exit!): ");
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        else if(n > size){
            printf("The number should be less then %d", size);
            continue;
        }

        else if(1 == is_prime(n)){
            printf("%d is a prime number! \n", n);
        }

        else{
            printf("%d is not a prime number! \n", n);
        }
    }


return 0;
}
