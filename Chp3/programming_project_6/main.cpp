#include <iostream>

int main() {
    double poundOfCrud;
    int numberOfDays;

    std::cout << "Enter the number of pounds of green crud: ";
    std::cin >> poundOfCrud;

    std::cout << "Enter the number of days: ";
    std::cin >> numberOfDays;

    double first = poundOfCrud;
    double second = poundOfCrud;
    double sum = poundOfCrud;

    for (int i = 5; i <= numberOfDays; i++)
    {
        if (i % 5 == 0)
        {
            if (i == 5)
            {
                sum = poundOfCrud;
            } else
            {
                sum = first + second;
                first = second;
                second = sum;
            }
        }

    }
    std::cout << "Total pound is " << sum << std::endl;
    return 0;
}
