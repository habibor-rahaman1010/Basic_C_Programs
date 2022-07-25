//string counting in c program....

#include <stdio.h>

int string_count(char string_arr[]) {
    int i = 0, length = 0;

    while(string_arr[i] != '\0'){
        i++;
        length++;
    }
    return length;
}

int main() {
    char string_arr[100];
    int length;

    while(1 == scanf("%s", string_arr)){
        length = string_count(string_arr);
        printf("Length: %d \n", length);
    }

return 0;
}





