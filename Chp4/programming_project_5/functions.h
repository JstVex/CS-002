//
// Created by Hein Htet Lu Lu on 30/10/2023.
//

#ifndef PROGRAMMING_PROJECT_5_FUNCTIONS_H
#define PROGRAMMING_PROJECT_5_FUNCTIONS_H
#include <iostream>
#include <cmath>
#include <string>
double basalMetabolicRate(double weight);
double physicalActivity(double weight, double intensity, double minutes);
double energyToDigestFood(double caloriesConsumed);
void chapter4ProgrammingProject5();
void getFourInput(double &weight, double &intensity, double &minutes, double &calories);
double getMaxServings(double weight, double intensity, double minutes, double calories);
double getInput();
void prompt(std::string message);
#endif //PROGRAMMING_PROJECT_5_FUNCTIONS_H
