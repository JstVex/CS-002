#include <iostream>

int main() {
    std::cout << "Prime numbers between 3 and 100 are " << std::endl;

    for (int number = 3; number <= 100; number++)
    {
        bool isPrime = true;

        for (int divisor = 2; divisor < number; divisor++)
        {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << number << " ";
        }
    }

    return 0;
}
