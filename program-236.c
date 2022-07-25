//concatenate 2 string in c program...
# include <stdio.h>

void string_concatenate(char str1[], char str2[]) {
    char str3[10];
    int i, j, length = 6, length2 = 4;

    for(i = 0, j = 0; i < length; i++, j++){
        str3[j] = str1[i];
    }

    for(i = 0; i < length2; i++, j++){
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s", str3);
}

int main () {
    char str1[] = "Bangla";
    char str2[] = "desh";
    string_concatenate(str1, str2);

return 0;
}
