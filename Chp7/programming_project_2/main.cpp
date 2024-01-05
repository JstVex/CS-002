#include <iostream>
#include <string>

int hexToDec(const std::string &hex) {
    int decimal = 0;
    for (int i = 0; i < hex.length(); i++)
    {
        char digit = hex[i];
        decimal *= 16;

        if (digit >= '0' && digit <= '9')
        {
            decimal += digit - '0';
        } else if (digit >= 'a' && digit <= 'f')
        {
            decimal += 10 + digit - 'a';
        } else if (digit >= 'A' && digit <= 'F')
        {
            decimal += 10 + digit - 'A';
        }
    }

    return decimal;
}

std::string decToHex(int decimal) {
    std::string hex = "";

    while (decimal > 0)
    {
        int remainder = decimal % 16;
        char hexChar;

        if (remainder < 10)
        {
            hexChar = static_cast<char>(remainder + '0');
        } else
        {
            hexChar = static_cast<char>(remainder - 10 + 'a');
        }
        hex += hexChar;
        decimal /= 16;
    }

    // Manually swap characters
    for (size_t i = 0; i < hex.length() / 2; i++)
    {
        char temp = hex[i];
        hex[i] = hex[hex.length() - 1 - i];
        hex[hex.length() - 1 - i] = temp;
    }

    if (hex.empty())
    {
        return "0";
    } else {
        return hex;
    }
}

int main() {
    std::string hex1, hex2;
    char repeat;

    do {
        std::cout << "Enter first hexadecimal number (up to 10 digits): ";
        std::cin >> hex1;
        std::cout << "Enter second hexadecimal number (up to 10 digits): ";
        std::cin >> hex2;

        int dec1 = hexToDec(hex1);
        int dec2 = hexToDec(hex2);
        int sum = dec1 + dec2;

        // Check for overflow
        if (sum > 1000000000)
        {
            std::cout << "Addition Overflow" << std::endl;
        } else
        {
            std::string resultHex = decToHex(sum);
            std::cout << "Result: " << resultHex << std::endl;
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
