#include <iostream>

int main() {
    double payIncreasePercentage = 0.076;
    double previousAnnualSalary = 0.0;
    int months = 0;
    double retroactivePay = 0.0;
    double newAnnualSalary = 0.0;
    double newMonthlySalary = 0.0;
    char userInput;

    do {
        std::cout << "Enter previous annual salary: ";
        std::cin >> previousAnnualSalary;

        std::cout << "Enter the number of months for retroactive salary: ";
        std::cin >> months;

        retroactivePay = (previousAnnualSalary * payIncreasePercentage) / (12.0 / months);

        newAnnualSalary = previousAnnualSalary + retroactivePay;

        newMonthlySalary = newAnnualSalary / 12;

        std::cout << "Retroactive pay: " << retroactivePay << std::endl;
        std::cout << "New annual salary: " << newAnnualSalary << std::endl;
        std::cout << "New monthly salary: " << newMonthlySalary << std::endl;

        std::cout << "Do you want to repeat the program: ";
        std::cin >> userInput;
    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
