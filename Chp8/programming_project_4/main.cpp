#include <iostream>
#include <string>

void formatName(std::string& firstName, std::string& middleName, std::string& lastName) {
    firstName[0] = std::toupper(firstName[0]);
    lastName[0] = std::toupper(lastName[0]);

    if (!middleName.empty()) {
        middleName[0] = std::toupper(middleName[0]);

        std::cout << lastName << ", " << firstName << " " << middleName[0] << "." << std::endl;
    } else {
        std::cout << lastName << ", " << firstName << std::endl;
    }
}

int main() {
    std::string firstName, middleName, lastName;

    // Read input names
    std::cout << "Enter the name in the format (first name middle name/initial last name): ";
    std::cin >> firstName >> middleName >> lastName;

    formatName(firstName, middleName, lastName);

    return 0;
}
