#include <iostream>
#include <iomanip>

int main() {
    int number1, number2, ETC, min, max;

    std::cout << "Enter two different numbers: ";
    std::cin >> number1 >> number2;

    if (number1 > number2)
    {
        max = number1;
        min = number2;
    } else
    {
        max = number2;
        min = number1;
    }

    std::cout << "Enter a third number for ETC: ";
    std::cin >> ETC;

    // 1
    std::cout << "Count up from " << min << " to " << max << ":\n";
    for (int i = min; i <= max; i++)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // 2
    std::cout << "Count down from " << max << " to " << min << ":\n";
    for (int i = max; i >= min; i--)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // 3
    std::cout << "Even numbers between " << min << " and " << max << ":\n";
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    // 4
    std::cout << "Odd numbers between " << min << " and " << max << ":\n";
    for (int i = min; i <= max; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    // 5
    std::cout << "Count up from " << min << " to " << max << " skipping two numbers" << ":\n";
    for (int i = min; i <= max; i++)
    {
        std::cout << i << " ";
        i++;
        std::cout << i << " ";
        i++;
        if (i < max) {
            std::cout << "X" << " ";
        }
    }
    std::cout << "\n";

    // 6
    std::cout << "Count up with multiples of 4\n";
    for (int i = min; i <= max; i++)
    {
        if (i%4 == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    // 7
    std::cout << "Count up skipping multiples of 7\n";
    for (int i = min; i <= max; i++)
    {
        if (i%7 != 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    // 8
    std::cout << "Count up skipping multiples of " << ETC << std::endl;
    for (int i = min; i <= max; i++)
    {
        if (i%ETC != 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";

    // 9
    std::cout << "Adding up all numbers from " << min << " to " << max << std::endl;
    int total = 0;
    for (int i = min; i <= max; i++)
    {
        total = total + i;
    }
    std::cout << "Total is " << total << std::endl;

    // 10
    std::cout << "Adding up all numbers from " << min << " to " << max << " and showing total odd numbers, total even numbers and grand total\n";
    int totalOdd = 0, totalEven = 0, grandTotal = 0;
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << "         " << i << "                   " << i << std::endl;
            totalEven = totalEven + i;
        } else
        {
            std::cout << "                   " << i << "         " << i << std::endl;
            totalOdd = totalOdd + i;
        }
        grandTotal = grandTotal + i;
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "        " << totalEven << "       " << totalOdd << "        " << grandTotal << std::endl;

    if (grandTotal == totalOdd + totalEven) {
        std::cout << "VERIFIED: " << grandTotal << " == " << totalOdd << " + " << totalEven << std::endl;
    } else {
        std::cout << "failed" << std::endl;
    }

    // 11
    std::cout << "Adding up all numbers from " << min << " to " << max << " and showing total odd numbers, total even numbers and grand total\n";
    int totalOddSkipETC = 0, totalEvenSkipETC = 0, grandTotalSkipETC = 0;
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {

            if (i % ETC == 0)
            {
                std::cout << "         " << 'X' << "                   " << 'X' << std::endl;
            } else
            {
                std::cout << "         " << i << "                   " << i << std::endl;
                totalEvenSkipETC = totalEvenSkipETC + i;
            }
        } else
        {
            if (i % ETC == 0)
            {
                std::cout << "                   " << 'X' << "         " << 'X' << std::endl;
            } else
            {
                std::cout << "                   " << i << "         " << i << std::endl;
                totalOddSkipETC = totalOddSkipETC + i;
            }
        }
        if (i % ETC != 0)
        {
            grandTotalSkipETC = grandTotalSkipETC + i;
        }
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "        " << totalEvenSkipETC << "       " << totalOddSkipETC << "        " << grandTotalSkipETC << std::endl;

    if (grandTotalSkipETC == totalOddSkipETC + totalEvenSkipETC) {
        std::cout << "VERIFIED: " << grandTotalSkipETC << " == " << totalOddSkipETC << " + " << totalEvenSkipETC << std::endl;
    } else {
        std::cout << "failed" << std::endl;
    }

    // 12
    std::cout << "First column: " << min << " to " << max << std::endl;
    std::cout << "Second column: odd numbers between " << min << " to " << max << std::endl;
    int odd = min;

    for (int i = min; i <= max; i++)
    {
        while (odd % 2 == 0)
        {
            odd++;
        }

        std::cout << std::setw(9) << i << std::setw(9);
        if (odd <= max)
        {
            std::cout << odd << std::setw(9) << (i + odd) << std::endl;
            odd++;
        } else
        {
            std::cout << std::setw(18) << i << std::endl;
        }
    }

    // 13
    std::cout << "First column: " << min << " to " << max << std::endl;
    std::cout << "Second column: multiples of 3 between " << min << " to " << max << std::endl;
    int multipleOf3 = min;

    for (int i = min; i <= max; i++)
    {
        while (multipleOf3 % 3 != 0)
        {
            multipleOf3++;
        }

        std::cout << std::setw(9) << i << std::setw(9);
        if (multipleOf3 <= max)
        {
            std::cout << multipleOf3 << std::setw(9) << (i + multipleOf3) << std::endl;
            multipleOf3++;
        } else
        {
            std::cout << std::setw(18) << i << std::endl;
        }
    }

    // 14
    std::cout << "First column: multiples of 4 between " << min << " to " << max << std::endl;
    std::cout << "Second column: multiples of 3 between " << min << " to " << max << std::endl;
    int multipleOf4 = min, multipleOf3_14 = min;

    for (int i = min; i <= max; i++)
    {
        while (multipleOf4 % 4 != 0) {
            multipleOf4++;
        }

        while (multipleOf3_14 % 3 != 0) {
            multipleOf3_14++;
        }

        if (multipleOf4 <= max)
        {
            std::cout << std::setw(9) << multipleOf4 << std::setw(9);
        }

        if (multipleOf3_14 <= max && multipleOf4 <= max)
        {
            std::cout << multipleOf3_14 << std::setw(9) << (multipleOf3_14 + multipleOf4) << std::endl;
        } else if (multipleOf3_14 <= max )
        {
            std::cout << std::setw(18) << multipleOf3_14 << std::setw(9)  << multipleOf3_14 << std::endl;
        }
        multipleOf3_14++;
        multipleOf4++;
    }

    // 15
    std::cout << "Factorial of " << min << std::endl;
    int factorial = 1;
    for (int i = 1; i <= min; i++)
    {
        factorial = factorial * i;

    // for printing out * and = signs
        if (i == min )
        {
            std::cout << i << " = ";
        } else
        {
            std::cout << i << " * ";
        }
    }
    std::cout << factorial << std::endl;

    return 0;
}
