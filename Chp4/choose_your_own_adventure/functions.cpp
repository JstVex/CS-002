//
// Created by Hein Htet Lu Lu on 15/10/2023.
//

#include "functions.h"

// set isDoorLocked as a global variable to use it in any function
bool isDoorLocked;

void run()
{
    char repeat;
    do
    {
        char room = 'K';
        isDoorLocked = false;

        output("It is time to study. Find your way to your bedroom to go back to your study desk");
        // run only when the room is not bedroom and the door isn't locked.
        while (room != 'e' && isDoorLocked == false)
        {
            switch(room)
            {
                case 'K':
                    room = threeConnectingRooms("You are in the kitchen", "(D)ining room", "(B)ackyard", "(U)pstairs Lobby");
                    break;
                case 'D':
                    room = twoConnectingRooms("You are in the dining room", "(K)itchen", "(P)orch");
                    break;
                case 'B':
                    // call the doorLockOrNot function to get either true or false value
                    if (doorLockOrNot())
                    {
                        doorLocked("You are in the backyard");
                    } else
                    {
                        room = oneConnectingRoom("You are in the backyard", "(K)itchen");
                    }
                    break;
                case 'U':
                    room = threeConnectingRooms("You are in the upstairs lobby", "(K)itchen", "(L)iving Room", "(H)all");
                    break;
                case 'P':
                    if (doorLockOrNot())
                    {
                        doorLocked("You are in the front porch");
                    } else
                    {
                        room = oneConnectingRoom("You are in the front porch", "(D)ining Room");
                    }
                    break;
                case 'L':
                    room = twoConnectingRooms("You are in the living room", "(U)pstairs Lobby", "B(a)lcony");
                    break;
                case 'a':
                    if (doorLockOrNot())
                    {
                        doorLocked("You are in the balcony");
                    } else
                    {
                        room = oneConnectingRoom("You are at the balcony", "(L)iving Room");
                    }
                    break;
                case 'H':
                    room = threeConnectingRooms("You are at the hallway", "(U)pstairs Lobby", "B(e)droom", "(V)eranda");
                    break;
                case 'V':
                    if (doorLockOrNot())
                    {
                        doorLocked("You are at the veranda");
                    } else
                    {
                        room = oneConnectingRoom("You are at the veranda", "(H)all");
                    }
                    break;
                default:
                    output("Enter the character of the room you would like to go");
                    // restart back to kitchen if a character that doesn't exist is entered. it is also to avoid infinite loop.
                    room = 'K';
            }
        }

        if (isDoorLocked)
        {
            output("You lost");
        } else
        {
            output("Congratulations! You are now in the bedroom ready to study!");
        }

        output("Do you want to play again: ");
        repeat = getUserInputChar();
    }
    while (repeat == 'y' || repeat == 'Y');
}

void output(std::string message)
{
    std::cout << message << std::endl;
}

char getUserInputChar()
{
    char input;
    std::cin >> input;
    return input;
}

char twoConnectingRooms(std::string currentRoom, std::string relatedRoom1, std::string relatedRoom2)
{
    output(currentRoom);
    output(relatedRoom1);
    output(relatedRoom2);
    output("Where would you like to go next?");
    char room = getUserInputChar();
    return room;
}

char threeConnectingRooms(std::string currentRoom, std::string relatedRoom1, std::string relatedRoom2, std::string relatedRoom3)
{
    output(currentRoom);
    output(relatedRoom1);
    output(relatedRoom2);
    output(relatedRoom3);
    output("Where would you like to go next?");
    char room = getUserInputChar();
    return room;
}

char oneConnectingRoom(std::string currentRoom, std::string relatedRoom1)
{
    output(currentRoom);
    output(relatedRoom1);
    output("Where would you like to go next?");
    char room = getUserInputChar();
    return room;
}

bool doorLockOrNot()
{
    // return true if 1 and false if 0
    return (rand() % 2 == 0);
}

void doorLocked(std::string message)
{
    output(message);
    output("The door locked behind you. You are stuck outside");
    // set isDoorLocked to true to exit the loop
    isDoorLocked = true;
}


