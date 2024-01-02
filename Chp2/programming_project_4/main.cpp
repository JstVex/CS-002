#include <iostream>

int main() {
    double amountNeedsToReceive = 0.0;
    double annualInterestRateInPercentage = 0.0;
    int durationOfLoan = 0;
    double annualInterestRate = 0.0;

    double totalInterest;
    double faceValue;
    double monthlyPayment;
    char userInput;

    do
    {
        std::cout << "Enter the amount the consumer needs to receive: ";
        std::cin >> amountNeedsToReceive;

        std::cout << "Enter the interest rate in percentage: ";
        std::cin >> annualInterestRateInPercentage;

        std::cout << "Enter the during of loan in months: ";
        std::cin >> durationOfLoan;

        annualInterestRate = annualInterestRateInPercentage / 100.0;
        totalInterest = amountNeedsToReceive / (annualInterestRate * durationOfLoan);

        faceValue = amountNeedsToReceive + totalInterest;

        monthlyPayment = faceValue / durationOfLoan;

        std::cout << "The face value is " << faceValue << std::endl;
        std::cout << "The monthly payment is " << monthlyPayment << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> userInput;

    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
