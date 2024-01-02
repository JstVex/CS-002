#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int computerNumber, userNumber, counter;
    char answer;

    do {
        // computer generates random number
        computerNumber = (rand()%100) + 1;

        std::cout << "I am thinking of a number between 1 and 100: ";

        // if the number is not the same ask the user for a new number until 10 times
        for (counter = 0; counter < 10 && userNumber != computerNumber; counter++)
        {
            // ask the user what they think the number is
            std::cout << "guess what it is: ";
            // get the number from the user
            std::cin >> userNumber;
            // compare the user's number with the computers number

            // if the user's number is greater than the comp number, then output too high
            if (userNumber > computerNumber)
            {
                std::cout << "Too high" << std::endl;
            } else if (userNumber < computerNumber)
            {
                // if the user's number is lower than the comp number, then output too low
                std::cout << "Too low" << std::endl;
            } else
            {
                // if the numbers are the same output cheater
                std::cout << "Cheater" << std::endl;
            }
        }

        if (userNumber != computerNumber)
        {
            // if the number is never correct, output loser
            std::cout << "Loser" << std::endl;
        }

        // ask the user if they want to play again
        std::cout << "Do you want to repeat the program? (y/n): ";
        std::cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    return 0;
}
