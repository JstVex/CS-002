#include <iostream>

int main() {
    int day;
    int hour, min;
    char colon;
    char userInput = '\0';
    double timeInMinutes;

    enum daysOfTheWeek {SUN, MON, TUES, WED, THUR, FRI, SAT};

    do {
        std::cout << "Enter a day of the week as an integer: ";
        std::cin >> day;

        std::cout << "Enter the time of the day: ";
        std::cin >> hour >> colon >> min;

        timeInMinutes = (hour * 60) + min;

        switch(day) {
            case SUN:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Walk the Dog" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Water the Lawn" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Get Groceries" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case MON:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Dust the TV" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Wash the Dishes" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Take out the Trash" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case TUES:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Make Coffee" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Make Lunch" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Mop the Floor" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case WED:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Do Homework" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Clean the Toilet" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Wash the Dog" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case THUR:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Go for a Jog" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Vacuum" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Mow the Lawn" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case FRI:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Wash Windows" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Do Laundry" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Make up Bed" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            case SAT:
                if (timeInMinutes <= 8*60) {
                    std::cout << "Call Grandma" << std::endl;
                } else if (timeInMinutes <= 12*60) {
                    std::cout << "Take a Nap" << std::endl;
                } else if (timeInMinutes <= 15*60) {
                    std::cout << "Make a List" << std::endl;
                } else {
                    std::cout << "You're finished for the day" << std::endl;
                }
                break;
            default:
                std::cout << "Enter from 0 to 6 for days" << std::endl;
        }

        std::cout << "Do you want to find another chore: ";
        std::cin >> userInput;

    } while (userInput == 'y' || userInput == 'Y');

    return 0;
}
