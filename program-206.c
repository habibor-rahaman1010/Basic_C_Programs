//find out max element in an array use function in c program....
#include <stdio.h>

int max_element(int arr[10]){
    int max_valu = arr[0];
    for(int i = 0; i < 10; i++){
        int element = arr[i];
        if(element > max_valu){
            max_valu = element;
        }
    }
    return max_valu;
}


int main(){
    int arr[10] = {34, 45, 67, 78, 99, 65, 43, 78, 100, 98};
    int result = max_element(arr);
    printf("Max value is: %d", result);
return 0;
}
