#include <iostream>
#include <vector>

void swapFrontBack(std::vector<int> &vec) {
    if (!vec.empty())
    {
        int temp = vec[0];
        vec[0] = vec[vec.size() - 1];
        vec[vec.size() - 1] = temp;
    }  else
    {
        std::cout << "The vector is empty" << std::endl;
    }
}

int main() {
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {10, 9, 8, 7};
    std::vector<int> test3 = {1, 2};
    std::vector<int> test4;

    std::cout << "Test 1: ";
    swapFrontBack(test1);
    for (int i = 0; i < test1.size(); i++)
    {
        std::cout << test1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Test 2: ";
    swapFrontBack(test2);
    for (int i = 0; i < test2.size(); i++)
    {
        std::cout << test2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Test 3: ";
    swapFrontBack(test3);
    for (int i = 0; i < test3.size(); i++)
    {
        std::cout << test3[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Test 4: ";
    swapFrontBack(test4);
    for (int i = 0; i < test4.size(); i++)
    {
        std::cout << test4[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
