//
// Created by Hein Htet Lu Lu on 03/11/2023.
//

#include "functions.h"

void chapter5PracticeProgram4()
{
    double meters, centimeters, feet, inches;
    char repeat;
    int choice;

    do {
        std::cout << "Choose 1 to convert from feet and inches to meters and centimeters and 2 for vice versa: ";
        std::cin >> choice;

        if (choice == 1) {
            choice1(feet, inches, meters, centimeters);
        } else if (choice == 2) {
            choice2(meters, centimeters, feet, inches);
        } else {
            std::cout << "Invalid choice. Please choose 1 or 2." << std::endl;
        }

        std::cout << "Do you want to repeat the calculation: ";
        std::cin >> repeat;
    } while(tolower(repeat) == 'y');
}

void input(double &value)
{
    std::cin >> value;
}

void convertToMetersAndCentimeters(double feet, double inches, double &meters, double &centimeters)
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

void displayResult1(double meters, double centimeters)
{
    std::cout << "The length in metres and centimeters is " << meters << " meters and " << centimeters << " centimeters" << std::endl;
}

void displayResult2(double feet, double inches)
{
    std::cout << "The length in feet and inches is " << feet << " feet and " << inches << " inches" << std::endl;
}

void choice1(double feet, double inches, double &meters, double &centimeters)
{
    std::cout << "Enter length in feet: ";
    input(feet);
    std::cout << "Enter length in inches: ";
    input(inches);

    convertToMetersAndCentimeters(feet, inches, meters, centimeters);
    displayResult1(meters, centimeters);
}

void choice2(double meters, double centimeters, double &feet, double &inches)
{
    std::cout << "Enter length in meters: ";
    input(meters);
    std::cout << "Enter length in centimeters: ";
    input(centimeters);

    convertToFeetAndInches(meters, centimeters, feet, inches);
    displayResult2(feet, inches);
}