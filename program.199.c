//max element find out on array in c program...
#include <stdio.h>
int main() {
    int i, arr[10] = {23, 45, 56, 65, 73, 41, 90, 99, 57, 47, 86, 87};
    int max = arr[0];

    for(i = 0; i < 10; i++){
        int elemnt = arr[i];
        if(elemnt > max){
            max = arr[i];
        }
    }
    printf("Max element is: %d", max);

return 0;
}
