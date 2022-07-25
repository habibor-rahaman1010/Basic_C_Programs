// input as a long string and output give a word  line by line in c program..
#include <stdio.h>
#include <string.h>

int problem_solve() {
    char str[1002], character;
    int i, length, is_word_started;
    gets(str);
    length = strlen(str);
    is_word_started = 0;

    for(i = 0; i < length; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(is_word_started == 0){
                is_word_started = 1;
                character = 'A' + (str[i] - 'a');
                printf("%c", character);
            }
            else{
                printf("%c", str[i]);
            }
        }

        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            printf("%c", str[i]);
        }

        else{
            if(is_word_started == 1){
                is_word_started = 0;
                printf("\n");
            }
        }
    }
    printf("\n");

}

int main() {
    problem_solve();

return 0;
}
