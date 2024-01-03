//
// Created by Hein Htet Lu Lu on 11/10/2023.
//

#include "functions.h"

void run()
{
    ///ask the user to enter a number
    output("Enter a number");
    //get the number from user
    int num = getUserInput();
    //output the number as a roman numeral
    output("The Roman Numeral Value is " + romanNumeral(num));
}
void output(std::string message)
{
    std::cout << message << std::endl;
}

int getUserInput()
{
    int input;
    ///get input from console
    //store it to a variable
    std::cin >> input;
    // return that variable
    return input;
}

std::string romanNumeral(int num)
{
    std::string result = "";
    //separate num into separate digits
    int thousands = getFirstDigit(num);
    int hundreds = getSecondDigit(num);
    int tens = getThirdDigit(num);
    int ones = getForthDigit(num);
    //output first digit as thousands, M, "" ""
    if (num >= 1000)
    {
        result += getRomanNumeral(thousands, 'M', '\0' , '\0');
    }
    //output second digit as hundreds C, D, M
    if (num >= 100)
    {
        result += getRomanNumeral(hundreds, 'C', 'D', 'M');
    }
    //output third digit as tens X, L, C
    if (num >= 10)
    {
        result += getRomanNumeral(tens, 'X', 'L', 'C');
    }
    //output forth as ones I, V, X
    if (num >= 1)
    {
        result += getRomanNumeral(ones, 'I', 'V', 'C');
    }

    return result;
}

std::string getRomanNumeral(int digit, char low, char med, char high)
{
    std::string number = "";

    switch(digit)
    {
        case 1:
        case 2:
        case 3:
            for (int i = 0; i < digit; i++)
                number += low;
            break;
        case 4:
            number += low;
            number += med;
            break;
        case 5:
            number += med;
            break;
        case 6:
        case 7:
        case 8:
            number += med;
            for (int i = 5; i < digit; i++)
                number += low;
            break;
        case 9:
            number += low;
            number += high;
        default:
            number = "";
    }

    return number;
}

int getFirstDigit(int num)
{
    while (num/10 != 0)
        num /= 10;
    return num;
}

int getSecondDigit(int num)
{
    return (num % 1000) / 100;
}

int getThirdDigit(int num)
{
    return (num % 100) / 10;
}

int getForthDigit(int num)
{
    return num % 10;
}