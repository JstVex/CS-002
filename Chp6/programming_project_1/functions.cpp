//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#include "functions.h"
void chp6ProgrammingProject1()
{
    std::ifstream fin;
    std::ofstream fout;
    std::string name;

    fin.open("file.txt");
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

    std::cout << "Enter the recipient's name: ";
    std::cin >> name;

    personalizeLetter(fin, fout, name);

    std::cout << "Personalized letter has been generated.\n";

    fin.close();
    fout.close();
}

void personalizeLetter(std::ifstream &fin, std::ofstream &fout, const std::string &name)
{
    char character;

    while (fin.get(character))
    {
        if (character == '#' && fin.get(character) && character == 'N' && fin.get(character) && character == '#')
        {
            fout << name;
        } else {
            // Copy the character to the output file
            fout << character;
        }
    }
}
