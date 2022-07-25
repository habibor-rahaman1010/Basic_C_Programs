// different style for loop use in c program...
int main() {
    int i = 1, num;
    printf("Enter your intiger number: ");
    scanf("%d", &num);

    for(; ;){
        printf("%d \n", i);
        i <= num;
        i++;

        if(i > 10){
            break;
        }
    }

return 0;
}
