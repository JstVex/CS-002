//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#ifndef PROGRAMMING_PROJECT_4_FUNCTIONS_H
#define PROGRAMMING_PROJECT_4_FUNCTIONS_H
#include <iostream>
#include <fstream>
void chp6ProgrammingProject4();
bool openFile(std::ifstream &fin, const std::string &filePath);
bool isPunctuation(char c);
double computeAverageWordLength(std::ifstream &fin);
#endif //PROGRAMMING_PROJECT_4_FUNCTIONS_H
