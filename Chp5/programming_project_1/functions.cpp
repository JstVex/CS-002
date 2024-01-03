//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#include "functions.h"

void chapter5ProgrammingProject1()
{
    char repeat;

    do {
        int hours, minutes;
        char colon, notation;

        inputTime(hours, colon, minutes);
        convertTo12Hour(hours, notation);
        outputTime(hours, minutes, notation);

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');
}

void inputTime(int &hours, char colon, int &minutes)
{
    std::cout << "Enter the time in 24-hour notation: ";
    std::cin >> hours >> colon >> minutes;
}

void convertTo12Hour(int &hours, char &notation) {
    if (hours >= 0 && hours <= 12) {
        notation = 'A';
    } else {
        notation = 'P';
        hours = hours - 12;
    }
}

void outputTime(int hours, int minutes, char notation) {
    std::cout << "The time in 12-hour notation is: " << hours << ":" << minutes << " " << notation << "M" << std::endl;
}
