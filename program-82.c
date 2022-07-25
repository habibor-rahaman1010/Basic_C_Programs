//character big hand or small hand findout in c progrm
#include <stdio.h>
int main() {
    char ch;
    printf("Enter you character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case character \n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case character \n", ch);
    }

return 0;
}
