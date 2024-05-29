#include <stdio.h>

double calculateTotalDebt(double interestsPayable, double principalAmount);
double calculateInterestsPayable(double principalAmount, double Rate, double Time);

int main(){

    double interestsPayable, principalAmount, Rate, Time, totalDebt,
           debtToEquityRatio, shareholdersEquity;

    printf("Enter the interests payable: ");
    scanf("%lf", &interestsPayable);
    printf("Enter the principal amount: ");
    scanf("%lf", &principalAmount);
    printf("Enter the Rate: ");
    scanf("%lf", &Rate);
    Rate /= 100;
    printf("Enter the Time: ");
    scanf("%lf", &Time);
    printf("Enter the shareholders equity: ");
    scanf("%lf", &shareholdersEquity);

    totalDebt = calculateTotalDebt(interestsPayable, principalAmount);
    interestsPayable = calculateInterestsPayable(principalAmount, Rate, Time);
    debtToEquityRatio = totalDebt / shareholdersEquity;

    printf("The interests payable is: %.2lf \n", interestsPayable);
    printf("The principal amount is: %.2lf \n", principalAmount);
    printf("The Rate is: %.2lf%% \n", Rate);
    printf("The Time is: %.2lf \n", Time);
    printf("The shareholders equity is: %.2lf \n", shareholdersEquity);
    printf("The debt to equity ratio is: %.2lf \n", debtToEquityRatio);

    return 0;
}

double calculateTotalDebt(double interestsPayable, double principalAmount){
    return interestsPayable + principalAmount;
}
double calculateInterestsPayable(double principalAmount, double Rate, double Time){
    return principalAmount * Rate * Time;
}