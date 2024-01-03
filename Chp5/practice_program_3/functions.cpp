//
// Created by Hein Htet Lu Lu on 03/11/2023.
//

#include "functions.h"

void chapter5PracticeProgram3()
{
    double meters, centimeters, feet, inches;
    char repeat;

    do {
        std::cout << "Enter length in meters: ";
        input(meters);
        std::cout << "Enter length in centimeters: ";
        input(centimeters);

        convertToFeetAndInches(meters, centimeters, feet, inches);

        displayResult(feet, inches);

        std::cout << "Do you want to repeat the calculation: ";
        std::cin >> repeat;
    } while(tolower(repeat) == 'y');
}

void input(double &value)
{
    std::cin >> value;
}

void convertToFeetAndInches(double meters, double centimeters, double &feet, double &inches)
{
    double totalMeters;
    int whole;
    double decimal;
    totalMeters = (centimeters / 100.0) + meters;
    feet = totalMeters / 0.3048;

    // get the decimal part of feet to turn it into inches
    whole = floor(feet);
    decimal = feet - whole;

    feet = floor(feet);
    inches = decimal * 12;
}

void displayResult(double feet, double inches)
{
    std::cout << "The length in feet and inches is " << feet << " feet and " << inches << " inches" << std::endl;
}