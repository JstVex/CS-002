//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#ifndef PROGRAMMING_PROJECT_3_FUNCTIONS_H
#define PROGRAMMING_PROJECT_3_FUNCTIONS_H
#include <iostream>
void chapter5ProgrammingProject3();
void inputTime(int &currentHours, char colon, int &currentMinutes, char &notation);
void inputWaitingTime(int &waitHours, char colon, int &waitMinutes);
void calculateNewTime(int currentHours, int currentMinutes, int waitHours, int waitMinutes, int &newHours, int &newMinutes, char &newNotation);
void outputTime(int newHours, int newMinutes, char newNotation);
#endif //PROGRAMMING_PROJECT_3_FUNCTIONS_H
