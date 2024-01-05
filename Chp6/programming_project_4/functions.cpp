//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#include "functions.h"
void chp6ProgrammingProject4()
{
    std::ifstream fin;
    double averageLength;

    if (openFile(fin, "file.txt"))
    {
        averageLength = computeAverageWordLength(fin);
        std::cout << "Average word length: "  << averageLength << std::endl;
        fin.close();
    } else
    {
        std::cout << "Cannot open file";
        exit(1);
    }
}

bool openFile(std::ifstream &fin, const std::string &filePath)
{
    fin.open(filePath);
    return !fin.fail();
}

bool isPunctuation(char c)
{
    return c == '.' || c == ',' || c == '!' || c == '?' || c == ';' || c == ':';
}

double computeAverageWordLength(std::ifstream &fin)
{
    char c;
    int totalLength = 0;
    double wordCount = 0.0;
    bool inWord = false;

    while (fin.get(c))
    {
        if (std::isalpha(c))
        {
            // if the character is an alphabet, we are inside a word and so increment total length
            inWord = true;
            totalLength++;
        } else if (isPunctuation(c) && inWord)
        {
            // handle the punctuation within a word
            inWord = false;
        } else if (std::isspace(c) && inWord)
        {
            // if the character is a whitespace character and we are inside a word, this means we are at the end of the word so we increment the word count
            wordCount++;
            inWord = false;
        }
    }

    return totalLength / wordCount;
}

