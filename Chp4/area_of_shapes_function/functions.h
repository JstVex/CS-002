//
// Created by Hein Htet Lu Lu on 12/10/2023.
//

#ifndef AREA_OF_SHAPES_FUNCTION_FUNCTIONS_H
#define AREA_OF_SHAPES_FUNCTION_FUNCTIONS_H
#include <iostream>
#include <cmath>
#include <string>
void run();
void output(std::string message);
void output(std::string message, double area);
double getUserInput();
double rectangleArea(double length, double height);
double triangleArea(double base, double height);
double circleArea(double radius);
#endif //AREA_OF_SHAPES_FUNCTION_FUNCTIONS_H
