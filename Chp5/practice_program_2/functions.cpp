//
// Created by Hein Htet Lu Lu on 03/11/2023.
//

#include "functions.h"

void chapter5PracticeProgram2()
{
    double feet, inches, meters, centimeters;
    char repeat;

    do {
        std::cout << "Enter length in feet: ";
        input(feet);
        std::cout << "Enter length in inches: ";
        input(inches);

        convertToMetersAndCentimeters(feet, inches, meters, centimeters);

        displayResult(meters, centimeters);

        std::cout << "Do you want to repeat the calculation: ";
        std::cin >> repeat;
    } while(tolower(repeat) == 'y');
}

void input(double &value)
{
    std::cin >> value;
}

void convertToMetersAndCentimeters(double feet, double inches, double& meters, double& centimeters)
{
    double totalFeet;
    int whole;
    double decimal;
    totalFeet = (inches / 12.0) + feet;
    meters = totalFeet * 0.3048;

    // get the decimal part of meters to turn it into centimeters
    whole = floor(meters);
    decimal = meters - whole;

    meters = floor(meters);
    centimeters = decimal * 100;
}

void displayResult(double meters, double centimeters)
{
    std::cout << "The length in metres and centimeters is " << meters << " meters and " << centimeters << " centimeters" << std::endl;
}