#include <iostream>
#include <string>

int main() {
    std::string hw = "Hello world";
    std::string h, w, newHw;

    int hIdx = hw.find("Hello");
    h = hw.substr(hIdx, 5);
    std::cout << "h is " << h << std::endl;

    int wIdx = hw.find("world");
    w = hw.substr(wIdx);
    std::cout << "w is " << w << std::endl;

//    for (int i = 0; i < hw.size(); i++)
//    {
//        newHw += hw[i];
//        newHw += 'x';
//    }

    for (int i = 1; i <= hw.size(); i++)
        hw.insert(i++, "x");

    std::cout << "hw is " << hw;

    return 0;
}
