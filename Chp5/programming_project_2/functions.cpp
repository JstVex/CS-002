//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#include "functions.h"

void chapter5ProgrammingProject2()
{
    char repeat;

    do
    {
        int currentHours, currentMinutes, waitHours, waitMinutes, newHours, newMinutes;
        char colon;

        inputTime(currentHours, colon, currentMinutes);
        inputWaitingTime(waitHours, colon, waitMinutes);

        calculateNewTime(currentHours, currentMinutes, waitHours, waitMinutes, newHours, newMinutes);

        outputTime(newHours, newMinutes);

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');
}

void inputTime(int &currentHours, char colon, int &currentMinutes)
{
    std::cout << "Enter the current time in 24-hour notation: ";
    std::cin >> currentHours >> colon >> currentMinutes;
}

void inputWaitingTime(int &waitHours, char colon, int &waitMinutes)
{
    std::cout << "Enter the waiting time: ";
    std::cin >> waitHours >> colon >> waitMinutes;
}

void calculateNewTime(int currentHours, int currentMinutes, int waitHours, int waitMinutes, int &newHours, int &newMinutes)
{
    newHours = currentHours + waitHours;
    newMinutes = currentMinutes + waitMinutes;

    if (newMinutes >= 60)
    {
        newHours++;
        newMinutes -= 60;
    }

    // loop back to under 24 when the new hours is greater than 24
    newHours = newHours % 24;
}

void outputTime(int newHours, int newMinutes)
{
    std::cout << "The time after waiting is: " << newHours << ":" << newMinutes << std::endl;
}