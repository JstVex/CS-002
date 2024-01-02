#include <iostream>

int main() {
    std::string instructorName;
    std::string yourName;
    std::string food;
    std::string number;
    std::string adjective;
    std::string color;
    std::string animal;

    std::cout << "Enter the first or last name of your instructor: ";
    std::cin >> instructorName;

    std::cout << "Enter your name: ";
    std::cin.ignore();
    getline(std::cin, yourName);

    std::cout << "Enter a food: ";
    getline(std::cin, food);

    std::cout << "Enter number between 100 and 120: ";
    std::cin >> number;

    std::cout << "Enter an adjective: ";
    std::cin >> adjective;

    std::cout << "Enter a color: ";
    std::cin.ignore();
    getline(std::cin, color);

    std::cout << "Enter an animal: ";
    getline(std::cin, animal);

    std::cout << "\nDear Instructor " << instructorName << std::endl;
    std::cout << "I am sorry that I am unable to turn in my homework at this time. ";
    std::cout << "First, I ate a rotten " << food << ", which made me turn " << color;
    std::cout << " and extremely ill. I came down with a fever of " << number << ". ";
    std::cout << "Next, my " << adjective << " pet " << animal;
    std::cout << " must have smelled the remains of the " << food << " on my homework, ";
    std::cout << "because he ate it. I am currently rewriting my homework and hope you ";
    std::cout << "will accept it late.\n";
    std::cout << "Sincerely,\n" << yourName << std::endl;

    return 0;
}
