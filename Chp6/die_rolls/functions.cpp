//
// Created by Hein Htet Lu Lu on 08/11/2023.
//

#include "functions.h"

void firstProgram()
{
    std::srand(std::time(0));

    int number;
    std::ofstream fout;

    if(openFile(fout, "file.txt"))
    {
        for(int i = 0; i < 100; i++)
        {
            number = rollDie();
            addToFile(fout, number);
        }
        closeFile(fout);
    } else
    {
        std::cout << "Cannot open file";
        exit(1);
    }
}

int rollDie()
{
    return (rand() % 6) + 1;
}

void addToFile(std::ofstream &fout, int number)
{
    fout << number << std::endl;
}

bool openFile(std::ofstream &fout, const std::string& filePath)
{
    fout.open(filePath);
    return !fout.fail();
}

void closeFile(std::ofstream &fout)
{
    fout.close();
}

void secondProgram()
{
    std::ifstream fin;
    int diceValues[6] = {0, 0, 0, 0, 0, 0};

    if(openFile(fin, "file.txt"))
    {
        while (!fin.eof())
        {
            int number;
            number = readFile(fin);
            for (int i = 1; i <= 6; i++)
            {
                if (number == i)
                {
                    diceValues[i - 1] += 1;
                }
            }
        }
        showReport(diceValues, 6);
        closeFile(fin);
    } else
    {
        std::cout << "Cannot open file";
        exit(2);
    }
}

int readFile(std::ifstream &fin)
{
    int integer;
    fin >> integer;
    return integer;
}

bool openFile(std::ifstream &fin, const std::string& filePath)
{
    fin.open(filePath);
    return !fin.fail();
}

void closeFile(std::ifstream &fin)
{
    fin.close();
}

void showReport(const int array[], int arraySize)
{
    std::string numberNames[] = {"one", "two", "three", "four", "five", "six"};

    for (int i = 0; i < arraySize; i++) {
        std::cout << numberNames[i] << ": " << array[i] << " rolls" << std::endl;
    }
}