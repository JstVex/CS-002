//
// Created by Hein Htet Lu Lu on 30/10/2023.
//

#ifndef PRACTICE_PROGRAM_1_FUNCTIONS_H
#define PRACTICE_PROGRAM_1_FUNCTIONS_H
#include <iostream>
#include <cmath>
#include <string>
double standardDeviation(double scores[], int size);
double variant(double score, double average);
double average(double scores[], int size);
double sumAllVariants(double average, double scores[], int size);
void chapter5PracticeProgram1();
void driver(void function(), std::string repeatMessage, bool goAgain());
bool repeat();
#endif //PRACTICE_PROGRAM_1_FUNCTIONS_H
