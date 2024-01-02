#include <iostream>

int main() {
    //Balance in a bank account
    //The number of times an athlete dunks a basketball
    //Whether or not a light bulb is on
    //Your first initial
    //The name of your high school
    //The length of time someone can hold their breath
    //Is someone telling the truth
    //How many jelly bean in a jar
    //A book title
    //The letter on a lettermans jacket

    float bankBalance = 4.5f;
    int basketballDunks = 5;
    bool isLightOn = true;
    char firstInitial = 'H';
    std::string highSchool = "Dagon 1";
    double timeHoldingBreath = 10.2;
    bool isTellingTruth = false;
    int numberOfJellyBeans = 54;
    std::string bookTitle = "The Great Gatsby";
    char letterOnJacket = 'L';

    std::cout << "Enter Bank Balance: ";
    std::cin >> bankBalance;
    std::cout << "Your bank Balance is " << bankBalance << std::endl;

    std::cout << "Enter basketball dunks: ";
    std::cin >> basketballDunks;
    std::cout << "Number of basketball dunks " << basketballDunks << std::endl;

    std::string getResponse;
    std::cout << "Light on or off: ";
    std::cin >> getResponse;

    // isLightOn = getResponse == "on";
    // on the above code we are assigning boolean operation to isLightOn so if getResponse is on then isLightOn will be true
    if (getResponse == "on") {
        isLightOn = true;
    } else {
        isLightOn = false;
    }
    if (isLightOn) {
        std::cout << "The light is on\n";
    } else {
        std::cout << "The light is off\n";
    }

    std::cout << "Enter your first initial: ";
    std::cin >> firstInitial;
    std::cout << "Your first initial is " << firstInitial << std::endl;

    std::cin.ignore();
    std::cout << "Enter your high school: ";
    getline(std::cin, highSchool);
    std::cout << "Your high school is " << highSchool << std::endl;

    std::cout << "Enter time you can hold your breath: ";
    std::cin >> timeHoldingBreath;
    std::cout << "Time you can hold your breath " << timeHoldingBreath << std::endl;

    std::cout << "Are you telling the truth? yes or no: ";
    std::cin >> getResponse;
    if (getResponse == "yes")
    {
        isTellingTruth = true;
    }
    else
    {
        isTellingTruth = false;
    }
    if (isTellingTruth)
    {
        std::cout << "You are telling the truth "<< std::endl;
    }
    else {
        std::cout << "You are not telling the truth "<< std::endl;
    }

    std::cout << "Enter number of jelly beans: ";
    std::cin >> numberOfJellyBeans;
    std::cout << "Your number of jelly beans is " << numberOfJellyBeans << std::endl;

    std::cin.ignore();
    std::cout << "Enter your book title: ";
    getline(std::cin, bookTitle);
    std::cout << "Your book title is " << bookTitle << std::endl;

    std::cout << "Enter letter on jacket: ";
    std::cin >> letterOnJacket;
    std::cout << "The letter on your jacket is " << letterOnJacket << std::endl;

    return 0;
}
