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
        double milesPerGallonCar1, milesPerGallonCar2;
        milesPerGallonCar1 = milesPerGallon("car 1");
        milesPerGallonCar2 = milesPerGallon("car 2");

        compareFuelEfficiency(milesPerGallonCar1, milesPerGallonCar2);

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;
    } while (tolower(repeat) == 'y');
}

double calculateMilesPerGallon(double liters, double miles)
{
    return (miles / (liters * litersPerGallon));
}

double milesPerGallon(std::string car)
{
    double liters, miles, milesPerGallon;
    std::cout << "Enter the number of liters of gasoline consumed: ";
    std::cin >> liters;
    std::cout << "Enter the number of miles traveled: ";
    std::cin >> miles;
    milesPerGallon = calculateMilesPerGallon(liters, miles);
    std::cout << "The number of miles per gallon for " << car << " is " << milesPerGallon << std::endl;
    return milesPerGallon;
}

void compareFuelEfficiency(double car1, double car2)
{
    if (car1 > car2)
    {
        std::cout << "Car 1 has the best fuel efficiency\n";
    } else if (car1 < car2)
    {
        std::cout << "Car 2 has the best fuel efficiency\n";
    } else
    {
        std::cout << "Same fuel efficiency\n";
    }
}