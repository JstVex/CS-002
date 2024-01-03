//
// Created by Hein Htet Lu Lu on 04/11/2023.
//

#include "functions.h"

void chapter5ProgrammingProject4()
{
    char repeat;

    do
    {
        int amount, quarters, dimes, pennies;

        std::cout << "Enter the amount in cents between 1 and 99: ";
        std::cin >> amount;

        computeCoins(25, quarters, amount);
        computeCoins(10, dimes, amount);
        computeCoins(1, pennies, amount);

        std::cout << amount << " cents can be given as " << quarters << " quarters " << dimes << " dimes and " << pennies << " pennies " << std::endl;

        std::cout << "Do you want to repeat the program? ";
        std::cin >> repeat;

    } while (repeat == 'Y' || repeat == 'y');
}

void computeCoins(int coinValue, int &num, int &amountLeft)
{
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}