// palindrome in c program.....
#include <stdio.h>
#include <string.h>

void palindrome(char word[100]) {
    char revers_word[100];
    int i, j, len;
    len = strlen(word);

    for(i = 0, j = len - 1; i < len; i++, j--){
        revers_word[i] = word[j];
    }
    revers_word[i] = '\0';

    int value = strcmp(word, revers_word);
    if(value == 0){
        printf("'%s', This is palindrome word!");
    }
    else{
        printf("'%s', This is not palindrome word!");
    }
}


int main() {
    char word[100];
    printf("Enter your word: ");
    scanf("%s", word);
    palindrome(word);
return 0;
}
