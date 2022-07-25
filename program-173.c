//parcentis find out program....

#include <stdio.h>
int main() {
    double loan_amount, interest_rate, number_of_years, total_amount, yearly_amount, monthly_amount;
    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter the number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = (loan_amount + loan_amount * interest_rate * number_of_years / 100.00);
    yearly_amount = (total_amount / 12);
    monthly_amount = total_amount / (number_of_years * 12);
    printf("\n");

    printf("Monthly_Amount = %0.2lf \n", monthly_amount);
    printf("Yearly_Amount = %0.2lf \n", yearly_amount);
    printf("Total_Amount = %0.2lf \n", total_amount);

return 0;
}
