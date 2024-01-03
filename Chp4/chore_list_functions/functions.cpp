//
// Created by Hein Htet Lu Lu on 12/10/2023.
//

#include "functions.h"

void run()
{
    char repeat;
    enum daysOfTheWeek {SUN, MON, TUES, WED, THUR, FRI, SAT};

    do {
        output("Enter a day of the week as an integer: ");
        int day = getUserInput();

        output("Enter the time of the day: ");
        int hour = getUserInput();
        char colon = getUserInputChar();
        int minutes = getUserInput();

        double timeInMinutes = convertToMinutes(hour, minutes);


        switch(day) {
            case SUN:
                getChores(timeInMinutes, "Walk the Dog", "Water the Lawn", "Get Groceries");
                break;
            case MON:
                getChores(timeInMinutes, "Dust the TV", "Wash the Dishes", "Take out the Trash");
                break;
            case TUES:
                getChores(timeInMinutes, "Make Coffee", "Make Lunch", "Mop the Floor");
                break;
            case WED:
                getChores(timeInMinutes, "Do Homework" , "Clean the Toilet", "Wash the Dog");
                break;
            case THUR:
                getChores(timeInMinutes, "Go for a Jog", "Vacuum", "Mow the Lawn");
                break;
            case FRI:
                getChores(timeInMinutes, "Wash Windows", "Do Laundry", "Make up Bed");
                break;
            case SAT:
                getChores(timeInMinutes, "Call Grandma", "Take a Nap", "Make a List");
                break;
            default:
                output("Enter from 0 to 6 for days");
        }

        output("Do you want to find another chore: ");
        repeat = getUserInputChar();

    } while (repeat == 'y' || repeat == 'Y');

}

void output(std::string message)
{
    std::cout << message << std::endl;
}

int getUserInput()
{
    int input;
    std::cin >> input;
    return input;
}

char getUserInputChar()
{
    char input;
    std::cin >> input;
    return input;
}

double convertToMinutes(int hour, int minutes)
{
    return (hour * 60) + minutes;
}

void getChores(double timeInMinutes,std::string message1, std::string message2, std::string message3 )
{
    if (timeInMinutes <= 8*60) {
        output(message1);
    } else if (timeInMinutes <= 12*60) {
        output(message2);
    } else if (timeInMinutes <= 15*60) {
        output(message3);
    } else {
        output("You're finished for the day");
    }
}
