//
// Created by Hein Htet Lu Lu on 19/10/2023.
//

#include "functions.h"

void run()
{
    char repeat;

    do {
        int shares, wholeDollars, numerator, denominator;
        double stockValue, totalHolding;

        std::cout << "Enter the number of shares owned: ";
        std::cin >> shares;
        std::cout << "Enter the whole-dollar portion of the price: ";
        std::cin >> wholeDollars;
        std::cout << "Enter the numerator of the fraction portion: ";
        std::cin >> numerator;
        std::cout << "Enter the denominator of the fraction portion: ";
        std::cin >> denominator;

        stockValue = calculateStockValue(wholeDollars, numerator, denominator);
        totalHolding = shares * stockValue;

        // Display the result
        std::cout << "The value of your holdings is: $" << totalHolding << std::endl;

        // Ask the user if they want to repeat the calculation
        std::cout << "Do you want to repeat the calculation? ";
        std::cin >> repeat;

    } while (tolower(repeat) == 'y');
}

double calculateStockValue(int wholeDollars, int numerator, int denominator)
{
    return static_cast<double>(wholeDollars + (numerator / denominator));
}
