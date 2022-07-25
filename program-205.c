//global variable in c program
#include <stdio.h>

double pi = 3.14;

void my_function(){
    pi = 3.1416;
}

int main() {
    printf("%lf \n", pi);
    my_function();
    printf("%lf", pi);

return 0;
}
