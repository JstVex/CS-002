//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#ifndef PROGRAMMING_PROJECT_2_FUNCTIONS_H
#define PROGRAMMING_PROJECT_2_FUNCTIONS_H
#include <iostream>
void chapter5ProgrammingProject2();
void inputTime(int &currentHours, char colon, int &currentMinutes);
void inputWaitingTime(int &waitHours, char colon, int &waitMinutes);
void calculateNewTime(int currentHours, int currentMinutes, int waitHours, int waitMinutes, int &newHours, int &newMinutes);
void outputTime(int newHours, int newMinutes);
#endif //PROGRAMMING_PROJECT_2_FUNCTIONS_H
