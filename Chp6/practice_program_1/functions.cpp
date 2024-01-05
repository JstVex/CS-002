//
// Created by Hein Htet Lu Lu on 11/11/2023.
//

#include "functions.h"

void chp6PracticeProgram1()
{
    std::ifstream fin;
    int number, smallest, largest;

    if(openFile(fin, "file.txt"))
    {
        fin >> number;
        smallest = number;
        largest = number;
        while(!fin.eof())
        {
            fin >> number;
            if (number < smallest)
            {
                smallest = number;
            }
            if (number > largest)
            {
                largest = number;
            }
        }
        std::cout << "Smallest number is " << smallest << std::endl;
        std::cout << "Largest number is " << largest << std::endl;

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




