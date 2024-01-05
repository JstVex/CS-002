#include <iostream>
#include <string>

void extractInfo(const std::string& input, std::string& name, int& age, std::string& title) {
    char firstSpace = input.find(' ');
    char secondSpace = input.find(' ', firstSpace + 1);

    name = input.substr(0, firstSpace);

    std::string ageStr = input.substr(firstSpace + 1, secondSpace - firstSpace - 1);
    age = 0;
    for (int i = 0; i < ageStr.length(); ++i)
    {
        char c = ageStr[i];
        age = age * 10 + (c - '0');
    }

    title = input.substr(secondSpace + 1);
}

int main() {
    std::string inputString = "Bob 45 Programmer";

    std::string name, title;
    int age;

    extractInfo(inputString, name, age, title);

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Title: " << title << std::endl;

    return 0;
}
