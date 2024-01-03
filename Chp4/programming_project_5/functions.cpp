//
// Created by Hein Htet Lu Lu on 30/10/2023.
//

#include "functions.h"

double basalMetabolicRate(double weight)
{
    return 70 * pow(weight/2.2, 0.756);
}

double physicalActivity(double weight, double intensity, double minutes)
{
    return 0.0385 * intensity * weight * minutes;
}

double energyToDigestFood(double caloriesConsumed)
{
    return caloriesConsumed * .1;
}

void chapter4ProgrammingProject5()
{
    double weight, intensity, minutes, calories, servings;
    prompt("Enter weight, intensity, minutes and calories: ")
    getFourInput(weight, intensity, minutes, calories);
    servings = getMaxServings(weight, intensity, minutes, calories);
    std::cout << "Max serving per day is " << servings << std::endl;
}

void getFourInput(double &weight, double &intensity, double &minutes, double &calories)
{
    weight = getInput();
    intensity = getInput();
    minutes = getInput();
    calories = getInput();
}

double getMaxServings(double weight, double intensity, double minutes, double calories)
{
    double maxCalories = getMaxCalories(weight, intensity, minutes, calories);
    return maxCalories
}

double getInput()
{
    double input;
    std::cin >> input;
    return input;
}

void prompt(std::string message)
{
    std::cout << message;
}

double getMaxCalories(double weight, double intensity, double minutes, double calories)