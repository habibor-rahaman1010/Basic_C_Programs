// string concatenate in c program....

#include <stdio.h>

char string_concatenate(char arr1[], char arr2[]) {
    int i, j, length1 = 8, length2 = 10;
    char arr3[18];

    for(i = 0, j = 0; i < length1; i++, j++){
        arr3[j] = arr1[i];
    }

    for(i = 0; i < length2; i++, j++){
        arr3[j] = arr2[i];
    }
    arr3[j] = '\0';

    printf("%s", arr3);
}

int main() {
    char arr1[] = "Habib is";
    char arr2[] = " good boy.";
    string_concatenate(arr1, arr2);

return 0;
}
