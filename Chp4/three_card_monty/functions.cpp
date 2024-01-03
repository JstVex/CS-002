//
// Created by Hein Htet Lu Lu on 17/10/2023.
//

#include "functions.h"

void playThreeCardMonty()
{
    char a = 'a', b = 'b', c = 'c';
    char repeat;
    srand((unsigned)time(0));
    do {
        int valueA = getCard();
        int valueB = getCard();
        int valueC = getCard();

        output("Please memorize the following cards\n");
        printCard(a, valueA);
        printCard(b, valueB);
        printCard(c, valueC);
        std::cout << std::endl;

        swapCard(valueA, valueB);
        printSwap(a, b);
        swapCard(valueA, valueC);
        printSwap(a , c);
        swapCard(valueC, valueB);
        printSwap(c, b);

        int newValueA = askCardValue("a");
        int newValueB = askCardValue("b");
        int newValueC = askCardValue("c");

        compareValues(valueA, newValueA, "a");
        compareValues(valueB, newValueB, "b");
        compareValues(valueC, newValueC, "c");

        output("Do you want to play again?: ");
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');
}

void output(std::string message)
{
    std::cout << message;
}

void printCard(char cardSuit, int cardRank)
{
    std::cout << cardSuit << ":" << cardRank << " ";
}

void getCard(int &cardRank)
{
    cardRank = rand() % 10;
}

int getCard()
{
    return rand() % 10;
}

void swapCard(int &cardRank1, int &cardRank2)
{
    int temp = cardRank1;
    cardRank1 = cardRank2;
    cardRank2 = temp;
}

void printSwap(char card1, char card2)
{
    std::cout << "swapping " << card1 << " and " << card2 << " ...\n";
}

int getUserInputValue()
{
    int value;
    std::cin >> value;
    return value;
}

int askCardValue(std::string cardSuit)
{
    output("What is the value for ");
    output(cardSuit);
    std::cout << " :";
    int value = getUserInputValue();
    return value;
}

void compareValues(int &oldValue, int &newValue, std::string cardSuit)
{
    if (oldValue == newValue)
    {
        output("You guessed correctly for ");
        output(cardSuit);
    } else
    {
        output("You guess is wrong for ");
        output(cardSuit);
    }
    std::cout << std::endl;
}