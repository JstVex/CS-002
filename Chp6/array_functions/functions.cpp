//
// Created by Hein Htet Lu Lu on 16/11/2023.
//

#include "functions.h"

void run()
{
    const int size = 10;
    int arr[size] = {5, 2, 9, 1, 0, 6, 3, 8, 7};
    int numUsed = 9;
    print(arr, size, numUsed);
    fill(arr, size, -1);
    printArray(arr, numUsed);
    fill(arr, size);
    printArray(arr, numUsed);
    shiftLeft(arr, size, numUsed, 6);
    printArray(arr, numUsed);
    shiftRight(arr, size, numUsed, 4);
    printArray(arr, numUsed);
    remove(arr, size, numUsed, 3);
    printArray(arr, numUsed);
    insert(arr, size, numUsed, 99, 5);
    printArray(arr, numUsed);
    bubbleSort(arr, size, numUsed);
    printArray(arr, numUsed);
    insertionSort(arr, size, numUsed);
    printArray(arr, numUsed);
}

void printArray(int arr[], int numUsed)
{
    for (int i = 0; i < numUsed; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print(int array[], int size, int numUsed)
{
    std::cout << "Used variables in array: ";
    for (int i = 0; i < numUsed; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void fill(int array[], int size, int defaultValue)
{
    std::cout << "Fill array with default value: ";
    for (int i = 0; i < size; i++)
    {
        array[i] = defaultValue;
    }
    std::cout << std::endl;
}

void fill(int array[], int size)
{
    std::cout << "Fill array with random values: ";
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand();
    }
    std::cout << std::endl;
}

void shiftLeft(int array[], int size, int numUsed, int index)
{
    std::cout << "Shifts all values to the left, starting at index: ";
    for (int i = index; i < numUsed - 1; i++)
    {
        array[i] = array[i + 1];
    }
    numUsed--;
    std::cout << std::endl;
}

void shiftRight(int array[], int size, int numUsed, int index)
{
    std::cout << "Shifts all values to the right, starting at index: ";
    for (int i = numUsed; i > index; i--)
    {
        array[i] = array[i - 1];
    }
    numUsed++;
    std::cout << std::endl;
}

void remove(int arr[], int size, int& numUsed, int value) {
    // Find the index of the value to remove
    std::cout << "Remove first instance of value from the array: ";
    int indexToRemove;
    for (int i = 0; i < numUsed; i++)
    {
        if (arr[i] == value) {
            indexToRemove = i;
            break;
        }
    }

    // Shift the elements to the left to fill the gap
    for (int i = indexToRemove; i < numUsed - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    numUsed--;
}

void insert(int arr[], int size, int &numUsed, int value, int index) {
    std::cout << "Insert value at given index: ";
    // Shift the elements to the right to make room for the new value
    for (int i = numUsed; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    numUsed++;
}

void bubbleSort(int array[], int size, int numUsed)
{
    for (int i = 0; i < numUsed - 1; ++i)
    {
        for (int j = 0; j < numUsed - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    std::cout << std::endl;
}


void insertionSort(int array[], int size, int numUsed)
{
    for (int i = 1; i < numUsed; i++)
    {
        int key = array[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead of their current position
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}