//
// Created by Hein Htet Lu Lu on 11/11/2023.
//

#include "functions.h"

void chp6PracticeProgram2()
{
    std::ifstream fin;
    double number, sum = 0, average;
    int count = 0;

    if(openFile(fin, "file.txt"))
    {
        while(!fin.eof())
        {
            fin >> number;
            sum += number;
            count++;
        }
        average = sum / count;
        std::cout << "Average is " << average << std::endl;

        fin.close();
    }
    else
    {
        std::cout << "Cannot open file";
        exit(1);
    }
}

bool openFile(std::ifstream &fin, const std::string& filePath)
{
    fin.open(filePath);
    return !fin.fail();
}


