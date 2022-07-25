
// string lowercase to uppercase converting in c program....

#include <stdio.h>

void string_uppercase(char arr[]) {
    int length = 17;
     printf("%s \n", arr);

    for(int i = 0; i < length; i++){
        if(arr[i] >= 97 && arr[i] <= 122){
            arr[i] = 65 + (arr[i] - 97);
        }
    }
      printf("%s \n", arr);

return;
}

int main() {
    char my_array[] = {'h', 'a', 'b', 'i', 'b', ' ', 'i', 's', ' ', 'g', 'o', 'o', 'd', ' ', 'b', 'o', 'y', '\0'};
    string_uppercase(my_array);

return 0;
}
