//
// Created by Hein Htet Lu Lu on 21/10/2023.
//

#include "functions.h"

void run()
{
    for (int bottles = 99; bottles > 0; bottles--) {
        std::string current = intToString(bottles);
        std::string next = intToString(bottles - 1);

        printLyrics(current, next);

        std::cout << std::endl;
    }
}

std::string intToString(int n)
{
    // create three arrays to get all 99 numbers
    const std::string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const std::string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    const std::string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    //  gets the tensDigit and onesDigit for numbers over 20
    int tensDigit = n / 10;
    int onesDigit = n % 10;

    if (n == 0)
    {
        return ones[0];
    } else if (n >= 1 && n <= 9)
    {
        return ones[n];
    } else if (n >= 11 && n <= 19)
    {
        return teens[n - 10];
    } else if (n % 10 == 0)
    {
        return tens[tensDigit];
    } else
    {
        return tens[tensDigit] + "-" + ones[onesDigit];
    }
}

void printLyrics(std::string current, std::string next)
{
    std::cout << current << " bottles of beer on the wall,\n";
    std::cout << current << " bottles of beer,\n";
    std::cout << "Take one down, pass it around,\n";
    std::cout << next << " bottles of beer on the wall.\n";
}