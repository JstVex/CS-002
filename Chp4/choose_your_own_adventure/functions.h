//
// Created by Hein Htet Lu Lu on 15/10/2023.
//

#ifndef CHOOSE_YOUR_OWN_ADVENTURE_FUNCTIONS_H
#define CHOOSE_YOUR_OWN_ADVENTURE_FUNCTIONS_H
#include <iostream>
#include <string>
#include <cstdlib>
void run();
void output(std::string message);
char getUserInputChar();
char oneConnectingRoom(std::string currentRoom, std::string relatedRoom1);
char twoConnectingRooms(std::string currentRoom, std::string relatedRoom1, std::string relatedRoom2);
char threeConnectingRooms(std::string currentRoom, std::string relatedRoom1, std::string relatedRoom2, std::string relatedRoom3);
bool doorLockOrNot();
void doorLocked(std::string message);
#endif //CHOOSE_YOUR_OWN_ADVENTURE_FUNCTIONS_H
