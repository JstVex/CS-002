#include <iostream>

int main() {
    bool isMorning;
    bool isCloudy;

//    if (isMorning)
//    {
//        // nested if statement
//        if (isCloudy)
//        {
//            std::cout << "Hello Nurse";
//        }
//        else
//        {
//            std::cout << "Hello World";
//        }
//    }
//    else
//    {
//        std::cout << "Hello Kitty";
//    }

    if (isMorning && isCloudy)
    {
        std::cout << "Hello Nurse";
    }
    else if (isMorning && !isCloudy)
    {
        std::cout << "Hello World";
    }
    else
    {
        std::cout << "Hello Kitty";
    }
    return 0;
}
