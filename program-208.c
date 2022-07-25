//find out even number in an array use function in c program....
#include <stdio.h>

int find_even_number(int arr[10]);

int main() {
    int arr[10] = {11, 12, 55, 67, 68, 77, 100, 75, 76, 78};
    int result = find_even_number(arr);

return 0;
}


int find_even_number(int arr[10]){
    for(int i = 0; i < 10; i++){
        int element = arr[i];
        if(element % 2 == 0){
            printf("%d \n", element);
        }
    }

}
