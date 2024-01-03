//
// Created by Hein Htet Lu Lu on 16/10/2023.
//

#include "functions.h"

char getFirstCharacter(std::string s)
{
    return s[0];
}

int letterInString(std::string s, char c)
{
    int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
       if (s[i] == c)
       {
           count++;
       }
    }
    return count;
}

std::string changeCharacterEveryNthTerm(std::string s, char c, int n)
{
    std::string newString;
    for (int i = 0; i < s.size(); i++)
    {
        if ((i + 1) % n == 0)
        {
            newString += c;
        }
        else
        {
            newString += s[i];
        }
    }
    return newString;
}
