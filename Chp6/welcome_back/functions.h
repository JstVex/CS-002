//
// Created by Hein Htet Lu Lu on 01/11/2023.
//

#ifndef WELCOME_BACK_FUNCTIONS_H
#define WELCOME_BACK_FUNCTIONS_H
#include <iostream>
#include <string>
#include <fstream>
bool openFile(std::ofstream &fout, const std::string& filePath);
bool openFileInput(std::ifstream &fin, const std::string& filePath);
void enterName(std::string &name);
#endif //WELCOME_BACK_FUNCTIONS_H
