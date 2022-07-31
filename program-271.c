//array sort in c program

#include <stdio.h>

int array_sort(int num[], int size){
    int i, j, temp;
    printf("Array before ascending! \n");
    for(i = 0; i < size; i++){
        printf("%d ", num[i]);
    }
    printf("\n \n");

    //array sort loop...
    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1; j++){
            if(num[j] > num[j + 1]){
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Array after ascending! \n");
    for(i = 0; i < size; i++){
        printf("%d ", num[i]);
    }
    printf("\n");

}


int main() {
    int size, i;
    printf("Enter the size of your array: ");
    scanf("%d", &size);
    int num[size];

    printf("\n");

    printf("Enter the value of your array: ");
    for(i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }
    printf("\n");
    array_sort(num, size);

return 0;
}
