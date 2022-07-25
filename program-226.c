// string uppercase to lowercase converting in c program....

#include <stdio.h>

void string_uppercase(char arr[]) {
    int length = 17;
    printf("%s \n", arr);

    for(int i = 0; i < length; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = 'a' + (arr[i] - 'A');
        }
    }
      printf("%s \n", arr);

return;
}

int main() {
    char my_array[] = {'H', 'A', 'B', 'I', 'B', ' ', 'I', 'S', ' ', 'G', 'O', 'O', 'D', ' ', 'B', 'O', 'Y', '\0'};
    string_uppercase(my_array);

return 0;
}

