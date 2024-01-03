//
// Created by Hein Htet Lu Lu on 23/10/2023.
//

#include "functions.h"

void run()
{
    int number1, number2;
    std::cout << "Enter two integers: ";
    std::cin >> number1 >> number2;
    add(number1, number2);
    subtraction(number1, number2);
    multiply(number1, number2);
    divide(number1, number2);
}

void add(int number1, int number2)
{
    // Convert the integers to strings to get their length
    std::string str1 = std::to_string(number1);
    std::string str2 = std::to_string(number2);
    int maxLength = 0;

    // Determine the maximum length of the two numbers
    if (str1.length() >= str2.length())
    {
        maxLength = str1.length();
    } else
    {
        maxLength = str2.length();
    }

    std::string positionArray[] = {"ones", "tens", "hundreds", "thousands"};
    int fixedNumber1 = number1;
    int fixedNumber2 = number2;
    int result = 0, carry = 0, position = 1;

    std::cout << std::setw(5)<< fixedNumber1 << std::endl;
    std::cout << "+ " << fixedNumber2 << std::endl;
    std::cout << "_________" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i <= maxLength; i++)
    {
        int sum, rightMostDigit1, rightMostDigit2;

        // keep getting the right digit for each digit starting from ones
        rightMostDigit1 = number1 % 10;
        rightMostDigit2 = number2 % 10;

        sum = rightMostDigit1 + rightMostDigit2 + carry;
        // carry will be 1 if is greater than 10
        carry = sum / 10;

        // multiply with position for each step
        result = result + ((sum % 10) * position);

        // branching for adding with carry or not
        if (carry > 0)
        {
            std::cout << "In " << positionArray[i] << " column, add the carried over " << carry << " with " << rightMostDigit1 << " and " << rightMostDigit2 << " together gives you " << sum << std::endl;
            std::cout << "bring down the " << (sum % 10) << " and carry the " << carry << std::endl;
            printInstructionsWithCarry(fixedNumber1, fixedNumber2, result, carry);
        } else
        {
            std::cout << "In " << positionArray[i] << " column, add " << rightMostDigit1 << " and " << rightMostDigit2 << " together gives you " << sum << std::endl;
            printInstructions(fixedNumber1, fixedNumber2, result);
        }
        std::cout << std::endl;

        // divide the numbers by 10 to increment the position of the numbers
        number1 = number1 / 10;
        number2 = number2 / 10;

        position = position * 10;
    }
    std::cout << "This gives you " << result << std::endl;
    std::cout << std::endl;
}

void printInstructions(int number1, int number2, int result)
{
    std::cout << std::setw(5) << number1 << std::endl;
    std::cout << "+ " << number2 << std::endl;
    std::cout << "________" << std::endl;
    std::cout << std::setw(5) << result << std::endl;
}

void printInstructionsWithCarry(int number1, int number2, int result, int carry)
{
    std::cout << std::setw(4) << carry << std::endl;
    std::cout << std::setw(5) << number1 << std::endl;
    std::cout << "+ " << number2 << std::endl;
    std::cout << "________" << std::endl;
    std::cout << std::setw(5) << result << std::endl;
}

void subtraction(int number1, int number2)
{
    std::string positionArray[] = {"ones", "tens", "hundreds", "thousands"};
    int largerNumber;
    int result = 0, borrow = 0, position = 1;

    // always make sure number1 is greater one
    if (number1 < number2)
    {
        int temp;
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    int fixedNumber1 = number1;
    int fixedNumber2 = number2;

    std::cout << std::setw(5) << fixedNumber1 << std::endl;
    std::cout << "- " << fixedNumber2 << std::endl;
    std::cout << "_________" << std::endl;
    std::cout << std::endl;

    for (int i = 0; largerNumber > 0; i++)
    {
        int rightMostDigit1 = number1 % 10;
        int rightMostDigit2 = number2 % 10;
        int division;

        // branching for needing borrow or not
        if (rightMostDigit1 < rightMostDigit2 + borrow)
        {
            //  add 10 to division since we borrow
            division = 10 + rightMostDigit1 - rightMostDigit2 - borrow;
            borrow = 1;
            std::cout << "In " << positionArray[i] << " column, subtract " << rightMostDigit2 << " from " << rightMostDigit1 << " gives you " << division << std::endl;
            std::cout << "Borrow 1 from the next column" << std::endl;
            result = result + (division * position);
            printInstructionsBorrow(fixedNumber1, fixedNumber2, result, borrow);
        } else {
            division = rightMostDigit1 - rightMostDigit2 - borrow;
            borrow = 0;
            std::cout << "In " << positionArray[i] << " column, subtract " << rightMostDigit2 << " from " << rightMostDigit1 << " gives you " << division << std::endl;
            result = result + (division * position);
            printInstructionsSubtract(fixedNumber1, fixedNumber2, result);
        }
        std::cout << std::endl;

        number1 = number1 / 10;
        number2 = number2 / 10;

        position *= 10;
    }

    std::cout << "This gives you " << result << std::endl;
    std::cout << std::endl;
}

void printInstructionsSubtract(int number1, int number2, int result)
{
    std::cout << std::setw(5) << number1 << std::endl;
    std::cout << "- " << number2 << std::endl;
    std::cout << "________" << std::endl;
    std::cout << std::setw(5) << result << std::endl;
}

void printInstructionsBorrow(int number1, int number2, int result, int borrow)
{
    std::cout << std::setw(5) << borrow << std::endl;
    std::cout << std::setw(5) << number1 << std::endl;
    std::cout << "- " << number2 << std::endl;
    std::cout << "________" << std::endl;
    std::cout << std::setw(5) << result << std::endl;
}

void multiply(int number1, int number2)
{
    int result = 0;
    int position = 1;
    int fixedNumber1 = number1;
    int fixedNumber2 = number2;
    int onesResult = 0, tensResult = 0, hundredsResult = 0, thousandsResult = 0;

    std::cout << std::setw(7) << fixedNumber1 << std::endl;
    std::cout << "x " << std::setw(5) << fixedNumber2 << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << std::endl;

    while (number2 > 0)
    {
        int digit = number2 % 10;
        int partialResult = number1 * digit * position;

        printInstructionsMultiply(number1, fixedNumber2, partialResult, position);
        if (position == 1)
        {
            onesResult = partialResult;
            std::cout << std::setw(7) << onesResult << std::endl;
        } else if (position == 10)
        {
            tensResult = partialResult;
            std::cout << std::setw(7) << onesResult << std::endl;
            std::cout << std::setw(7) << tensResult << std::endl;
        } else if (position == 100)
        {
            hundredsResult = partialResult;
            std::cout << std::setw(7) << onesResult << std::endl;
            std::cout << std::setw(7) << tensResult << std::endl;
            std::cout << std::setw(7) << hundredsResult << std::endl;
        } else if (position == 1000)
        {
            thousandsResult = partialResult;
            std::cout << std::setw(7) << onesResult << std::endl;
            std::cout << std::setw(7) << tensResult << std::endl;
            std::cout << std::setw(7) << hundredsResult << std::endl;
            std::cout << std::setw(7) << thousandsResult << std::endl;
        }

        result += partialResult;
        position *= 10;

        std::cout << std::endl;

        number2 /= 10;
    }

    std::cout << "The answer is: " << std::endl;
    std::cout << std::setw(7) << fixedNumber1 << std::endl;
    std::cout << "x " << std::setw(5) << fixedNumber2 << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << onesResult << " + " << tensResult << " + " << hundredsResult << " + " << thousandsResult << " = " << result << std::endl;
}

void printInstructionsMultiply(int number1, int number2, int partialResult, int position)
{
    std::cout << "In " << position << " column, multiply " << number2 << " by " << number1 << " gives you " << partialResult << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(7) << number1 << std::endl;
    std::cout << "x " << std::setw(5) << number2 << std::endl;
    std::cout << "_____________" << std::endl;
}


void divide(int number1, int number2)
{
    int position = 1;
    int result = 0;

    int fixedNumber1 = number1;
    int fixedNumber2 = number2;

    std::cout << "  ___________" << std::endl;
    std::cout << fixedNumber2 << "|" << fixedNumber1 << std::endl;
    std::cout << "  ________" << std::endl;


    // go through the loop until number 1 isn't divisible by number 2 anymore
    while (number1 >= number2)
    {
        int quotient;
        quotient = number1 / number2;
        printInstructionsDivide(number1, number2, quotient, position);

        int subtractedValue = quotient * number2;
        subtractedValue = subtractedValue * position;

        result = result + (quotient * position);
        position = position * 10;
        number1 = number1 - subtractedValue;
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "Remainder: " << number1 << std::endl;
}

void printInstructionsDivide(int number1, int number2, int quotient, int position)
{
    std::cout << "In " << position << " column, divide " << number1 << " by " << number2 << " gives you " << quotient << std::endl;
}