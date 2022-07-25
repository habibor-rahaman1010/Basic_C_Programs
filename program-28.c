//vowel and consonant find out in c program....

#include <stdio.h>

int main() {
    char my_char;
    printf("Enter your character: \n");
    scanf("%c", &my_char);

    char ch = my_char;
    if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
        printf("This is vowel character: %c", ch);
    }
    else{
        printf("This is consonant character: %c", ch);
    }

return 0;
}
