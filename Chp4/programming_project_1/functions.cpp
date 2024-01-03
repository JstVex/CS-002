//
// Created by Hein Htet Lu Lu on 21/10/2023.
//

#include "functions.h"

void run()
{
    char repeat;

    do
    {
        double housePrice, downPayment, annualMortageCost, annualAfterTaxCost;

        std::cout << "Enter the price of the house: ";
        std::cin >> housePrice;
        std::cout << "Enter the down payment: ";
        std::cin >> downPayment;

        annualMortageCost = calculateAnnualMortgageCost(housePrice, downPayment);

        annualAfterTaxCost = calculateAfterTaxCost(annualMortageCost);
        std::cout << "Annual after-tax cost of the house is " << annualAfterTaxCost << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;
    } while (tolower(repeat) == 'y');
}

double calculateAnnualMortgageCost(double housePrice, double downPayment)
{
    double initialLoan, principal, interest;

    initialLoan = housePrice - downPayment;
    principal = 0.03 * initialLoan;
    interest = 0.06 * initialLoan;

    return principal + interest;
}

double calculateAfterTaxCost(double annualMortgageCost)
{
    double taxSavings, afterTaxCost;
    taxSavings = 0.35 * annualMortgageCost;
    afterTaxCost = annualMortgageCost - taxSavings;
    return afterTaxCost;
}