#include <iostream>

int main() {
    double packageWeightInOunces = 0.0;
    double packageWeightInMetricTon = 0.0;
    int numberOfBoxes = 0;
    char userInput = '\0';

    do {
        std::cout << "Enter the weight of a breakfast cereal in ounces: ";
        std::cin >> packageWeightInOunces;

        packageWeightInMetricTon = packageWeightInOunces / 35273.92;
        std::cout << "The weight in metric tons is " << packageWeightInMetricTon << std::endl;

        numberOfBoxes = static_cast<int>(1 / packageWeightInMetricTon);
        std::cout << "Number of boxes needed to produce 1 metric ton of cereal: " << numberOfBoxes << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> userInput;
    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
