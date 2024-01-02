#include <iostream>

int main() {
    int numCards, score;
    char cardValue;
    char repeat;

    do {
        int totalScore = 0;
        int numOfAces = 0;

        std::cout << "Enter the number of cards from 2 to 5: ";
        std::cin >> numCards;

        std::cout << "Enter card values 2 to 9 or t, j, q, k, a: ";
        for (int i = 0; i < numCards; i++)
        {
            cardValue = '\0';
            std::cin >> cardValue;

            // Convert card values to numeric scores
            score = 0;
            if (cardValue == '2' || cardValue == '3' || cardValue == '4' || cardValue == '5' || cardValue == '6' || cardValue == '7' || cardValue == '8' || cardValue == '9')
            {
                score = cardValue - '0';
            } else
            {
                switch (cardValue)
                {
                    case 't':
                        score = 10;
                        break;
                    case 'j':
                        score = 10;
                        break;
                    case 'q':
                        score = 10;
                        break;
                    case 'k':
                        score = 10;
                        break;
                    case 'a':
                        score = 11;
                        numOfAces++;
                        break;
                    default:
                        std::cout << "Invalid card value" << std::endl;
                }
            }

            totalScore = totalScore + score;

            // Change aces value from 11 to 1 if the total score is over 21
            while (totalScore > 21 && numOfAces > 0) {
                totalScore = totalScore - 10;
                numOfAces--;
            }
        }

        if (totalScore <= 21) {
            std::cout << "Total score: " << totalScore << std::endl;
        } else {
            std::cout << "Busted" << std::endl;
        }

        std::cout << "Do you want to calculate again?: ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
