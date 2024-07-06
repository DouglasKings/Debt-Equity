#include <stdio.h>

// Function prototypes
double calculateTotalDebt(double interestPayable, double principalAmount);
double calculateInterestPayable(double principalAmount, double Rate, double Time);

int main() {
    double interestPayable, principalAmount, Rate, Time, totalDebt, debtToEquityRatio, shareholdersEquity;

    // Prompt the user to enter the interest payable
    printf("Enter the interest payable: ");
    scanf("%lf", &interestPayable);
    
    // Prompt the user to enter the principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principalAmount);
    
    // Prompt the user to enter the annual interest rate (as a percentage)
    printf("Enter the Rate: ");
    scanf("%lf", &Rate);
    Rate /= 100; // Convert the rate from percentage to decimal
    
    // Prompt the user to enter the time period (in years)
    printf("Enter the Time: ");
    scanf("%lf", &Time);
    
    // Prompt the user to enter the shareholder's equity
    printf("Enter the shareholders equity: ");
    scanf("%lf", &shareholdersEquity);

    // Check if principal amount is zero
    if (principalAmount == 0) {
        printf("Error: Principal amount cannot be zero.\n");
        return -1; // Indicate an error occurred
    }

    // Calculate the interest payable based on the principal amount, rate, and time
    interestPayable = calculateInterestPayable(principalAmount, Rate, Time);

    // Calculate the total debt by adding the interest payable to the principal amount
    totalDebt = calculateTotalDebt(interestPayable, principalAmount);
    
    // Calculate the debt to equity ratio by dividing the total debt by the shareholder's equity
    debtToEquityRatio = totalDebt / shareholdersEquity;

    // Print the calculated values
    printf("The interest payable is: %.2lf \n", interestPayable);
    printf("The principal amount is: %.2lf \n", principalAmount);
    printf("The Rate is: %.2lf%% \n", Rate * 100); // Display the rate as a percentage
    printf("The Time is: %.2lf \n", Time);
    printf("The shareholders equity is: %.2lf \n", shareholdersEquity);
    printf("The debt to equity ratio is: %.2lf \n", debtToEquityRatio);

    return 0;
}

// Function to calculate the total debt by adding the interest payable to the principal amount
double calculateTotalDebt(double interestPayable, double principalAmount) {
    return interestPayable + principalAmount;
}

// Function to calculate the interest payable based on the principal amount, rate, and time
double calculateInterestPayable(double principalAmount, double Rate, double Time) {
    return principalAmount * Rate * Time;
}
