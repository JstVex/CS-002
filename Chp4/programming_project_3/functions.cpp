//
// Created by Hein Htet Lu Lu on 21/10/2023.
//

#include "functions.h"

void run()
{
    char repeat;

    do
    {
        double height, weight;
        int age;
        double hatSize, jacketSize, waistSize;
        double jacketSizeAfter10Years, waistSizeAfter10Years;

        std::cout << "Enter your height, weight and age: ";
        std::cin >> height >> weight >> age;

        hatSize = calculateHatSize(weight, height);
        std::cout << "Hat size is " << hatSize << std::endl;

        jacketSize = calculateJacketSize(weight, height, age);
        std::cout << "Jacket size is " << jacketSize << std::endl;

        waistSize = calculateWaistSize(weight, age);
        std::cout << "Waist size is " << waistSize << std::endl;

        // calculations for after 10 years;
        age = age + 10;

        jacketSizeAfter10Years = calculateJacketSize(weight, height, age);
        std::cout << "Jacket size after 10 years is " << jacketSizeAfter10Years << std::endl;

        waistSizeAfter10Years = calculateWaistSize(weight, age);
        std::cout << "Waist size after 10 years is " << waistSizeAfter10Years << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;
    } while (tolower(repeat) == 'y');
}

double calculateHatSize(double weight, double height)
{
    return (weight / height) * 2.9;
}

double calculateJacketSize(double weight, double height, int age)
{
    double size, adjustment = 0.0;
    int yearsOver30;

    size = (height * weight) / 288;

    if (age > 30)
    {
        yearsOver30 = age - 30;
        adjustment = (yearsOver30 / 10) * (1.0 /8.0);
    }

    return size + adjustment;
}

double calculateWaistSize(double weight, int age)
{
    double size, adjustment = 0.0;
    int yearsOver28;

    size = weight / 5.7;

    if (age > 28)
    {
        yearsOver28 = age - 28;
        adjustment = (yearsOver28 / 2) * 0.1;
    }

    return size + adjustment;
}