// different style for loop use in c program...find out even number
int main() {
    int i = 1, num;
    printf("Enter your intiger number: ");
    scanf("%d", &num);

    for(; ;){
        i <= num;
        i++;

        if(i % 2 != 0){
            continue;
        }
         printf("%d \n", i);

        if(i > 10){
            break;
        }
    }

return 0;
}

