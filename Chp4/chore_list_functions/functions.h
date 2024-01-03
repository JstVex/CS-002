//
// Created by Hein Htet Lu Lu on 12/10/2023.
//

#ifndef CHORE_LIST_FUNCTIONS_FUNCTIONS_H
#define CHORE_LIST_FUNCTIONS_FUNCTIONS_H
#include <iostream>
#include <string>
void run();
void output(std::string message);
int getUserInput();
char getUserInputChar();
double convertToMinutes(int hour, int minutes);
void getChores(double timeInMinutes, std::string message1, std::string message2, std::string message3);
#endif //CHORE_LIST_FUNCTIONS_FUNCTIONS_H
