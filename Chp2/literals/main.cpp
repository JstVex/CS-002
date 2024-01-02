#include <iostream>

int main()
{
    int age = 45;
    char initial = 'H';
    std::string name = "Lu Lu";
    double weight = 142.6;
    float bankBal = 5.6f;

    std::string message = " What is your name? ";
    std::cout << message;
    getline(std::cin, name);

    std::cout << "Your name is " << name;
    return 0;
}
