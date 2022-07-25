// string compare in  program....
#include <stdio.h>

int string_compare(char arr1[], char arr2[]) {
    int i, result = 0;

    for(int i = 0; arr1[i] != '\0' && arr2[i] != '\0'; i++){
        if(arr1[i] < arr2[i]){
            result = -1;
        }
        else if(arr1[i] > arr2[i]){
            result = 1;
        }
        else{
            result = 0;
        }
    }

return result;
}

int main() {
    char A[] = "abc";
    char B[] = "abc";
    int result = string_compare(A, B);

    if(result == 1){
        printf("A is big then B");
    }
    else if(result == -1){
        printf("B is big then A");
    }
    else{
        printf("A and B there are equal..");
    }


return 0;
}
