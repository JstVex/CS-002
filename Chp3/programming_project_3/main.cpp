#include <iostream>

int main() {
    int numeralYear;
    std::string romanYear;
    int thousands, hundreds, tens, ones;
    char repeat;

    do {
        std::cout << "Enter a year between 1000 and 3000: ";
        std::cin >> numeralYear;

        if (numeralYear >= 1000 && numeralYear <= 3000) {
            romanYear = "";

            // Calculating the thousands place
            thousands = numeralYear / 1000;
            for (int i = 0; i < thousands; i++) {
                romanYear += "M";
            }

            // Calculating the hundreds place
            hundreds = (numeralYear % 1000) / 100;
            if (hundreds == 9) {
                romanYear += "CM";
            } else if (hundreds >= 5) {
                romanYear += "D";
                for (int i = 0; i < hundreds - 5; i++) {
                    romanYear += "C";
                }
            } else if (hundreds == 4) {
                romanYear += "CD";
            } else {
                for (int i = 0; i < hundreds; i++) {
                    romanYear += "C";
                }
            }

            // Calculating the tens place
            tens = (numeralYear % 100) / 10;
            if (tens == 9) {
                romanYear += "XC";
            } else if (tens >= 5) {
                romanYear += "L";
                for (int i = 0; i < tens - 5; i++) {
                    romanYear += "X";
                }
            } else if (tens == 4) {
                romanYear += "XL";
            } else {
                for (int i = 0; i < tens; i++) {
                    romanYear += "X";
                }
            }

            // Calculating the ones place
            ones = numeralYear % 10;
            if (ones == 9) {
                romanYear += "IX";
            } else if (ones >= 5) {
                romanYear += "V";
                for (int i = 0; i < ones - 5; i++) {
                    romanYear += "I";
                }
            } else if (ones == 4) {
                romanYear += "IV";
            } else {
                for (int i = 0; i < ones; i++) {
                    romanYear += "I";
                }
            }

            std::cout << numeralYear << " in roman numeral is " << romanYear << std::endl;
        } else {
            std::cout << "Please enter a year between 1000 and 3000." << std::endl;
        }

        std::cout << "Do you want to calculate again?: ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
