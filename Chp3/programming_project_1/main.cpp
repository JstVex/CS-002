#include <iostream>

int main() {
    char firstChar, secondChar, colon, repeat;
    int hour, min, callLength;
    double costPerMinute, totalCost, timeInMinutes;
    std::string day;

    do {
        std::cout << "Enter the first letter of the day of the week: ";
        std::cin >> firstChar;

        std::cout << "Enter the second letter of the day of the week: ";
        std::cin >> secondChar;

        // combining the two characters into a string
        day += firstChar;
        day += secondChar;

        if (day == "Mo" || day == "mo") {
            day = "Mo";
        } else if (day == "Tu" || day == "tu") {
            day = "Tu";
        } else if (day == "We" || day == "we") {
            day = "We";
        } else if (day == "Th" || day == "th") {
            day = "Th";
        } else if (day == "Fr" || day == "fr") {
            day = "Fr";
        } else if (day == "Sa" || day == "sa") {
            day = "Sa";
        } else if (day == "Su" || day == "su") {
            day = "Su";
        } else {
            std::cout << "Invalid day of the week" << std::endl;
        }

        std::cout << "Enter the start time: ";
        std::cin >> hour >> colon >> min;

        timeInMinutes = (hour * 60) + min;

        std::cout << "Enter the length of the call: ";
        std::cin >> callLength;

        if ((day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") && (timeInMinutes >= 8*60 && timeInMinutes <= 18*60))
        {
            costPerMinute = 0.40;
        } else if ((day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") && (timeInMinutes < 8*60 || timeInMinutes > 18*60)) {
            costPerMinute = 0.25;
        } else if (day == "Sa" || day == "Su") {
            costPerMinute = 0.15;
        }

        totalCost = costPerMinute * callLength;

        std::cout << "Total cost of the call: " << totalCost << std::endl;

        std::cout << "Do you want to calculate another call?: ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
