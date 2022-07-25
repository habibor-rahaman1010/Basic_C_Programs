//Finding Area Of Circle In C Program

#include <stdio.h>

int find_circle(float pi, float radius); //it's function prototype..

int main() {
    const float pi = 3.141;
    float radius = 15;
    printf("Enter your circle radius: ");
    scanf("%f", &radius);

    float result = find_circle(pi, radius);
    printf("%0.2f \n", result);

return 0;
}


int find_circle(float pi, float radius){
    float area;
    area = (pi * radius * radius);
    return area;

}
