//
// Created by Hein Htet Lu Lu on 12/10/2023.
//

#include "functions.h"

void run()
{
    output("Enter the length");
    double length = getUserInput();

    output("Enter the height");
    double height = getUserInput();

    output("Enter the base");
    double base = getUserInput();

    output("Enter the radius");
    double radius = getUserInput();

    double areaOfRectangle = rectangleArea(length, height);
    output("Area of rectangle is ", areaOfRectangle);

    double areaOfTriangle = triangleArea(base, height);
    output("Area of triangle is ", areaOfTriangle);

    double areaOfCircle= circleArea(radius);
    output("Area of circle is ", areaOfCircle);
}

void output(std::string message)
{
    std::cout << message << std::endl;
}

void output(std::string message, double area)
{
    std::cout << message << area << std::endl;
}

double getUserInput()
{
    double input;
    std::cin >> input;
    return input;
}

double rectangleArea(double length, double height)
{
    return length * height;
}

double triangleArea(double base, double height)
{
    return (0.5 * base ) * height;
}


double circleArea(double radius)
{
    return M_PI * pow(radius, 2);
}
