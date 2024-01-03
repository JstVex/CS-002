//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#include "functions.h"

void chapter5ProgrammingProject3()
{
    char repeat;

    do
    {
        int currentHours, currentMinutes, waitHours, waitMinutes, newHours, newMinutes;
        char colon, notation, newNotation;

        inputTime(currentHours, colon, currentMinutes, notation);
        inputWaitingTime(waitHours, colon, waitMinutes);

        calculateNewTime(currentHours, currentMinutes, waitHours, waitMinutes, newHours, newMinutes, newNotation);

        outputTime(newHours, newMinutes, newNotation);

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');
}

void inputTime(int &currentHours, char colon, int &currentMinutes, char &notation)
{
    std::cout << "Enter the current time in 12-hour notation: ";
    std::cin >> currentHours >> colon >> currentMinutes >> notation;
}

void inputWaitingTime(int &waitHours, char colon, int &waitMinutes)
{
    std::cout << "Enter the waiting time: ";
    std::cin >> waitHours >> colon >> waitMinutes;
}

void calculateNewTime(int currentHours, int currentMinutes, int waitHours, int waitMinutes, int &newHours, int &newMinutes, char &newNotation)
{
    newHours = currentHours + waitHours;
    newMinutes = currentMinutes + waitMinutes;


    if (newMinutes >= 60)
    {
        newHours++;
        newMinutes = newMinutes - 60;
    }

    if (newHours > 12)
    {
        newHours = newHours - 12;
        newNotation = 'P';
    } else
    {
        newNotation = 'A';
    }
}

void outputTime(int newHours, int newMinutes, char newNotation)
{
    std::cout << "The time after waiting is: " << newHours << ":" << newMinutes << " " << newNotation << "M" << std::endl;
}