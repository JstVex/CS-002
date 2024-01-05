#include <iostream>
#include <cmath>

double calculateStandardDeviation(const double numbers[], int size) {
    double sum = 0.0, sumSquaredDifferences = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    double mean = sum / size;

    for (int i = 0; i < size; i++)
    {
        double difference = numbers[i] - mean;
        sumSquaredDifferences += difference * difference;
    }

    double variance = sumSquaredDifferences / size;

    double standardDeviation = std::sqrt(variance);

    return standardDeviation;
}

int main() {
    const int maxSize = 100;
    double numbers[maxSize];
    int usedSize;

    std::cout << "Enter the number of elements you want for the array (at least 2): ";
    std::cin >> usedSize;

    std::cout << "Enter " << usedSize << " numbers separated by spaces: ";
    for (int i = 0; i < usedSize; i++)
    {
        std::cin >> numbers[i];
    }

    double stdDev = calculateStandardDeviation(numbers, usedSize);
    std::cout << "Standard Deviation: " << stdDev << std::endl;

    return 0;
}