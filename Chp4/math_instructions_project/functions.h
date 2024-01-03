//
// Created by Hein Htet Lu Lu on 23/10/2023.
//

#ifndef MATH_INSTRUCTIONS_PROJECT_FUNCTIONS_H
#define MATH_INSTRUCTIONS_PROJECT_FUNCTIONS_H
#include <iostream>
#include <iomanip>
void run();
void add(int number1, int number2);
void printInstructionsWithCarry(int number1, int number2, int result, int carry);
void printInstructions(int number1, int number2, int result);
void subtraction(int number1, int number2);
void printInstructionsSubtract(int number1, int number2, int result);
void printInstructionsBorrow(int number1, int number2, int result, int borrow);
void multiply(int number1, int number2);
void printInstructionsMultiply(int number1, int number2, int partialResult, int position);
void divide(int number1, int number2);
void printInstructionsDivide(int number1, int number2, int quotient, int position);
#endif //MATH_INSTRUCTIONS_PROJECT_FUNCTIONS_H
