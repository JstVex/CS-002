#include <iostream>

int main() {
    int x = 5;
    int y = 6;
    double w = 4;
    double z = 2.5;
    std::string userInput = "";

    do
    {
        if (x > y)
        {
            std::cout << "X is greater than Y" << std::endl;
        }
        else
        {
            std::cout << "X is not greater than Y" << std::endl;
        }

        if ((x/2.0) == z)
        {
            std::cout << "Hello World" << std::endl;
        }

        if (((x + y) < (w * z)) || ((x / 2) == (y - w)))
        {
            std::cout << "I love C++" << std::endl;
        }
        else
        {
            std::cout << "I love Computer Science" << std::endl;
        }

        if (x == y)
        {
            std::cout << "Today is a good day" << std::endl;
        } else if (((x / z) != (y - w)) && (w + 1 == x))
        {
            std::cout << "Today is a great day" << std::endl;
        }
        else
        {
            std::cout << "Today is the best day" << std::endl;
        }

        std::cout << "Do you want to insert your own values ";
        std::cin >> userInput;

        if (userInput == "yes" || userInput == "Yes") {
            std::cout << "Enter the value for x ";
            std::cin >> x;

            std::cout << "Enter the value for y ";
            std::cin >> y;

            std::cout << "Enter the value for w ";
            std::cin >> w;

            std::cout << "Enter the value for z ";
            std::cin >> z;

            if (x > y)
            {
                std::cout << "X is greater than Y" << std::endl;
            }
            else
            {
                std::cout << "X is not greater than Y" << std::endl;
            }

            if ((x / 2.0) == z)
            {
                std::cout << "Hello World" << std::endl;
            }

            if (((x + y) < (w * z)) || ((x / 2) == (y - w)))
            {
                std::cout << "I love C++" << std::endl;
            }
            else
            {
                std::cout << "I love Computer Science" << std::endl;
            }

            if (x == y)
            {
                std::cout << "Today is a good day" << std::endl;
            } else if (((x / z) != (y - w)) && (w + 1 == x))
            {
                std::cout << "Today is a great day" << std::endl;
            }
            else
            {
                std::cout << "Today is the best day" << std::endl;
            }
        } else {
            std::cout << "Good bye" << std::endl;
        }
    } while (userInput == "yes" || userInput == "Yes");

    return 0;
}
