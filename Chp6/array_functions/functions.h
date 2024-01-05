//
// Created by Hein Htet Lu Lu on 16/11/2023.
//

#ifndef ARRAY_FUNCTIONS_FUNCTIONS_H
#define ARRAY_FUNCTIONS_FUNCTIONS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
void run();
void printArray(int arr[], int numUsed);
void print(int array[], int size, int numUsed);
void fill(int array[], int size, int defaultValue);
void fill(int array[], int size);
void shiftLeft(int array[], int size, int numUsed, int index);
void shiftRight(int array[], int size, int numUsed, int index);
void remove(int arr[], int size, int& numUsed, int value);
void insert(int arr[], int size, int &numUsed, int value, int index);
void bubbleSort(int array[], int size, int numUsed);
void insertionSort(int array[], int size, int numUsed);
#endif //ARRAY_FUNCTIONS_FUNCTIONS_H
