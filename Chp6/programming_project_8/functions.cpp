//
// Created by Hein Htet Lu Lu on 26/11/2023.
//

#include "functions.h"

void chp6ProgrammingProject8()
{
    std::ifstream fin;
    std::ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");

    if(fin.fail())
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    if(fout.fail())
    {
        std::cout << "Cannot open file";
        exit(2);
    }

    linesNumber(fin, fout);

    fin.close();
    fout.close();

    std::cout << "Line numbers added" << std::endl;
}

void linesNumber(std::ifstream &fin, std::ofstream &fout)
{
    char c;
    int lineNumber = 1;
    bool newLine = true;

    while (fin.get(c))
    {
        if (newLine)
        {
            std::cout << std::setw(3) << lineNumber << ": ";
            fout << std::setw(3) << lineNumber << ": ";
            newLine = false;
        }

        std::cout << c;
        fout << c;

        if (c == '\n')
        {
            lineNumber++;
            newLine = true;
        }
    }
}
