//
// Created by Hein Htet Lu Lu on 01/11/2023.
//

#include "functions.h"

bool openFile(std::ofstream &fout, const std::string& filePath)
{
    fout.open(filePath);
    return !fout.fail();
}

bool openFileInput(std::ifstream &fin, const std::string& filePath)
{
    fin.open(filePath);
    return !fin.fail();
}

void enterName(std::string &name)
{
    std::cout << "Enter your first name: ";
    std::cin >> name;
}