//
// Created by Hein Htet Lu Lu on 19/10/2023.
//

#include "functions.h"

const double litersPerGallon = 0.264179;

void run()
{
    char repeat;

    do
    {
        double liters, miles, milesPerGallon;

        std::cout << "Enter the number of liters of gasoline consumed: ";
        std::cin >> liters;
        std::cout << "Enter the number of miles traveled: ";
        std::cin >> miles;

        milesPerGallon = calculateMilesPerGallon(liters, miles);
        std::cout << "The number of miles per gallon is " << milesPerGallon << std::endl;
        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;
    } while (tolower(repeat) == 'y');
}

double calculateMilesPerGallon(double liters, double miles)
{
    return (miles / (liters * litersPerGallon));
}
