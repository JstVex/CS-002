//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#include "functions.h"

void chp6PracticeProgram4()
{
    std::ifstream fin;
    double number;
    double sum = 0.0;
    int count = 0;
    double squaredDifferenceSum = 0.0;
    double average = 0.0;
    double standardDeviation = 0.0;

    if(openFile(fin, "file.txt"))
    {
        while(!fin.eof())
        {
            fin >> number;
            sum += number;
            count++;
        }
        average = sum / count;
        fin.close();
    } else
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    std::ifstream fin2;
    if(openFile(fin2, "file.txt"))
    {
        while(!fin2.eof())
        {
            fin2 >> number;
            squaredDifferenceSum += std::pow((number - average), 2);
        }
        standardDeviation = std::sqrt(squaredDifferenceSum / count);
        fin2.close();
    } else
    {
        std::cout << "Cannot open file";
        exit(2);
    }

    std::cout << "Average: " << average << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;
}

bool openFile(std::ifstream &fin, const std::string& filePath)
{
    fin.open(filePath);
    return !fin.fail();
}

