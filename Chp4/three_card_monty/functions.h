//
// Created by Hein Htet Lu Lu on 17/10/2023.
//

#ifndef THREE_CARD_MONTY_FUNCTIONS_H
#define THREE_CARD_MONTY_FUNCTIONS_H
#include <iostream>
#include <string>
#include <cstdlib>
void playThreeCardMonty();
void output(std::string message);
void printCard(char cardSuit, int cardRank);
void getCard(int &cardRank);
int getCard();
void swapCard(int &cardRank1, int &cardRank2);
void printSwap(char card1, char card2);
int getUserInputValue();
int askCardValue(std::string cardSuit);
void compareValues(int &oldValue, int &newValue, std::string cardSuit);
#endif //THREE_CARD_MONTY_FUNCTIONS_H
