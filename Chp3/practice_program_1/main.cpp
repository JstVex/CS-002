#include <iostream>

int main() {
    char user1, user2, rematch;

    do {
        std::cout << "Enter R, P or S for user 1: ";
        std::cin >> user1;

        std::cout << "Enter R, P or S for user 2: ";
        std::cin >> user2;

        if ((user1 == 'R' || user1 == 'r') && (user2 == 'P' || user2 == 'p'))
        {
            std::cout << "User 2 is the winner\n" << "Paper covers rock\n";
        }

        if ((user1 == 'P' || user1 == 'p') && (user2 == 'R' || user2 == 'r'))
        {
            std::cout << "User 1 is the winner\n" << "Paper covers rock\n";
        }

        if ((user1 == 'S' || user1 == 's') && (user2 == 'P' || user2 == 'p'))
        {
            std::cout << "User 1 is the winner\n" << "Scissors cut paper\n";
        }

        if ((user1 == 'P' || user1 == 'p') && (user2 == 'S' || user2 == 's'))
        {
            std::cout << "User 2 is the winner\n" << "Scissors cut paper\n";
        }

        if ((user1 == 'S' || user1 == 's') && (user2 == 'R' || user2 == 'r'))
        {
            std::cout << "User 2 is the winner\n" << "Rock breaks scissors\n";
        }

        if ((user1 == 'R' || user1 == 'r') && (user2 == 'S' || user2 == 's'))
        {
            std::cout << "User 1 is the winner\n" << "Rock breaks scissors\n";
        }

        std::cout << "Do you want a rematch: ";
        std::cin >> rematch;
    } while (rematch == 'y' || rematch == 'Y');

    return 0;
}
