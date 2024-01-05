//
// Created by Hein Htet Lu Lu on 28/11/2023.
//

#include "functions.h"

void run()
{
    std::string message = "My cat is smart";
    std::string message2 = "My#cat#is#smart";
    std::vector<std::string> v1 = split(message);
    std::vector<std::string> v2 = split(message2, '#');

    for(int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < v2.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
}

std::vector<std::string> split(std::string message, char delimiter)
{
    std::vector<std::string> v;
    int start = 0;
    int end = message.find(delimiter);

    while(end < message.size())
    {
        v.push_back(message.substr(start, end - start));
        start = end + 1;
        end = message.find(delimiter, start);
    }

    v.push_back(message.substr(start));
    return v;
}