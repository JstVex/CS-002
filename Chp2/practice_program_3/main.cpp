#include <iostream>

int main() {
    double mph = 0.0;
    double minutesPerMile = 0.0;
    int minutesAsInteger = 0;
    double seconds = 0.0;

    std::cout << "Enter the speed in miles per hour: ";
    std::cin >> mph;

    minutesPerMile = 60 / mph;

    // calculate the integer part of minutes
    minutesAsInteger = static_cast<int>(minutesPerMile);

    seconds = (minutesPerMile - minutesAsInteger) * 60;

    std::cout << mph << " mph is equivalent to " << minutesAsInteger << " minutes and " << seconds << " seconds per mile";

    return 0;
}
