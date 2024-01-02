#include <iostream>

int main() {
    double n;
    std::cout << "Enter a number to compute its square root: ";
    std::cin >> n;

    double guess = n / 2;
    double previousGuess;

    for (int i = 0; i < 100; i++) {
        previousGuess = guess;
        double r = n / guess;
        guess = (guess + r) / 2.0;

        double difference = guess - previousGuess;

        // Check if the difference is within 1% of previousGuess
        if (difference >= -0.01 * previousGuess && difference <= 0.01 * previousGuess) {
            break;
        }
    }

    std::cout << "Approximate square root " << guess << std::endl;

    return 0;
}
