#include <iostream>

int main() {
    double lethalDoseForMouse = 5.0;
    double massOfMouse = 35.0;
    double massOfHuman = 45400.0;
    const double sweetenerInSoda = 0.001;

    double weightAtDietStop = 0.0;
    char userInput;

    do {
        std::cout << "Enter the weight at which you will stop dieting: ";
        std::cin >> weightAtDietStop;

        // convert weight to grams
        weightAtDietStop = weightAtDietStop * 454;

        double lethalDoseForHuman = (weightAtDietStop / massOfHuman) * lethalDoseForMouse;
        double cansBeforeLethal = static_cast<int>(lethalDoseForHuman / (sweetenerInSoda * 350));

        std::cout << "Cans to safely drink without dying: " << cansBeforeLethal << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> userInput;
    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
