#include <iostream>

int main() {
    int x;
    int counter = 0;
    std::cout << "Enter a number: ";
    std::cin >> x;

    while (x != 0)
    {
        x = x/2;
        counter = counter + 1;
    }

    std::cout << "Counter " << counter << std::endl;
    return 0;
}
