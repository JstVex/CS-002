//
// Created by Hein Htet Lu Lu on 11/10/2023.
//

#ifndef FUNCTIONS_FUNCTIONS_H
#define FUNCTIONS_FUNCTIONS_H
#include <string>
#include <iostream>
void run();
void output(std::string message);
int getUserInput();
std::string romanNumeral(int num);
int getFirstDigit(int num);
int getSecondDigit(int num);
int getThirdDigit(int num);
int getForthDigit(int num);
std::string getRomanNumeral(int digit, char low, char med, char high);
#endif //FUNCTIONS_FUNCTIONS_H
