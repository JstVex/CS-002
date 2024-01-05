//
// Created by Hein Htet Lu Lu on 11/11/2023.
//

#include "functions.h"

void chp6PracticeProgram3()
{
    std::ifstream fin;
    std::ifstream fin2;
    int number, middle, num1, num2;
    int count = 0;
    double median;
    std::cout << "Hi";

    if(openFile(fin, "file.txt"))
    {
        while(!fin.eof())
        {
            count++;
        }
        middle = count / 2;
        fin.close();
    }
    else
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    if(openFile(fin2, "file.txt"))
    {
        for (int i = 0; i < middle; i++)
        {
            fin2 >> number;
        }

        if (count % 2 == 0) {
            fin2 >> num1;
            fin2 >> num2;
            median = (num1 + num2) / 2.0;
        } else {
            fin2 >> number;
            median = number;
        }
        std::cout << "Median is " << median << std::endl;
        fin2.close();
    }
    else
    {
        std::cout << "Cannot open file";
        exit(2);
    }
}

bool openFile(std::ifstream &fin, const std::string& filePath)
{
    fin.open(filePath);
    return !fin.fail();
}
