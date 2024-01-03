//
// Created by Hein Htet Lu Lu on 30/10/2023.
//

#include "functions.h"

double standardDeviation(double scores[], int size)
{
    double avg = average(scores, size);
    double sum = sumAllVariants(avg, scores, size);
    return sqrt(sum/size);
}

double variant(double score, double average)
{
    return pow(score - average, 2);
}

double average(double scores[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    return sum / size;
}

double sumAllVariants(double average, double scores[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += variant(scores[i], average);
    }
    return sum;
}

void chapter5PracticeProgram1()
{
    int size = 4;
    double scores[size];
    std::cout << "Enter four grades: ";
    for(int i = 0; i < size; i++)
    {
        std::cin >> scores[i];
    }

    std::cout << standardDeviation(scores, size) << std::endl;
}

void driver(void function(), std::string repeatMessage, bool goAgain())
{
    do
    {
        function();
        std::cout << repeatMessage;

    } while(goAgain());
}

bool repeat()
{
    char repeat;
    std::cin >> repeat;
    return tolower(repeat) == 'y';
}