#include <iostream>
#include "functions.h"

int main() {
    char c =  getFirstCharacter("Hello");
    std::cout << c << std::endl;
    int number = letterInString("Hello World", 'l');
    std::cout << number << std::endl;
    std::string newString = changeCharacterEveryNthTerm("Hello", 'z', 2);
    std::cout << newString << std::endl;
    return 0;
}
