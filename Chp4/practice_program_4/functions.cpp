//
// Created by Hein Htet Lu Lu on 20/10/2023.
//

#include "functions.h"

void run()
{
    char repeat;

    do {
        double priceOneYearAgo, priceToday, inflationRate;

        std::cout << "Enter the price of an item one year ago: ";
        std::cin >> priceOneYearAgo;
        std::cout << "Enter the current price of the item: ";
        std::cin >> priceToday;

        inflationRate = calculateInflationRate(priceOneYearAgo, priceToday);

        std::cout << "The inflation rate for the past year is: " << inflationRate << "%" << std::endl;

        std::cout << "Do you want to repeat the calculation? ";
        std::cin >> repeat;

    } while (tolower(repeat) == 'y');
}

double calculateInflationRate(double priceOneYearAgo, double priceToday)
{
    return ((priceToday - priceOneYearAgo) / priceOneYearAgo) * 100.0;
}
