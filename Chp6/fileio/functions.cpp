//
// Created by Hein Htet Lu Lu on 01/11/2023.
//

#include "functions.h"
bool openFile(std::ofstream &fout, const std::string& filePath)
{
    fout.open(filePath);
    return !fout.fail();
}