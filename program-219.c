//binary search in c program...

void binary_search(int arr[10]); //it's function prototype...

int main() {
    int my_array[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    binary_search(my_array);

return 0;
}

// it's my binary search function...
void binary_search(int arr[10]) {
    int low_index = 0;
    int high_index = 14;
    int mid_index;
    int number;
    printf("Enter your search number: ");
    scanf("%d", &number);

    while(low_index <= high_index){
        mid_index = (low_index + high_index) / 2;

        if(number == arr[mid_index]){
            break;
        }

        if(number < arr[mid_index]){
            high_index = mid_index - 1;
        }
        else{
            low_index = mid_index + 1;
        }
    }

    if(low_index > high_index){
        printf("%d is not found in the array. \n", number);
    }
    else{
        printf("%d is found in the array. It is the %d index element of the array. \n", arr[mid_index], mid_index);
    }

return 0;
}


