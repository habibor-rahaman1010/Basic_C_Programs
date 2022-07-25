// if else condition in c program..
#include <stdio.h>
 int main() {
    int x = 10;
    int z = 10;

//(x >= z++),(x >= z),(x+1 > z),(x+=1 > z) (++x > z),(x++ >= z++),(++x >= z++),(++x >= ++z) there are same and boolean result is True!
//(x > z++) (x++ > z),(x > z + 1),(x > z) (x++ > z++),(++x > ++z) boolean result is False!
    if(++x > ++z) {
        printf("Hello peogrammer how are you?");
    }
    else{
        printf("hello world");
    }

 return 0;
 }
