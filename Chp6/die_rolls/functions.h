//
// Created by Hein Htet Lu Lu on 08/11/2023.
//

#ifndef DIE_ROLLS_FUNCTIONS_H
#define DIE_ROLLS_FUNCTIONS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
void firstProgram();
int rollDie();
void addToFile(std::ofstream &fout, int number);
bool openFile(std::ofstream &fout, const std::string& filePath);
void closeFile(std::ofstream &fout);
void secondProgram();
int readFile(std::ifstream &fin);
bool openFile(std::ifstream &fin, const std::string& filePath);
void closeFile(std::ifstream &fin);
void showReport(const int array[], int arraySize);
#endif //DIE_ROLLS_FUNCTIONS_H
