// array elements summation in c program....

#include <stdio.h>
int main() {
    int i, sum = 0, arr[10] = {23, 45, 56, 65, 73, 41, 57, 47, 86, 87};
    for(i = 0; i < 10; i++){
        int element = arr[i];
        sum += element;
    }
    printf("%d", sum);

return 0;
}
