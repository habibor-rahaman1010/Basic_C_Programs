// array sort in c program inputs from user...
#include <stdio.h>

int array_sorted(int num[20], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; i++){
      printf("%d\n", num[i]);
   }
}

int main () {
   int n, i, num[20];
   printf("enter number of elements in an array: ");
   scanf("%d", &n);
   printf("Enter the elements: ");

   for (i = 0; i < n; i++){
        scanf("%d", &num[i]);
   }
    printf("\n \n");
    array_sorted(num, n);
}
