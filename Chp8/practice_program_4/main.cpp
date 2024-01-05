#include <iostream>
#include <vector>

bool firstLast2(std::vector<int> &v)
{
    return v[0] == 2 || v[v.size() - 1] == 2;
}

int main() {
    std::vector<int> test1 = {2, 4, 6, 8, 10};
    std::vector<int> test2 = {1, 3, 5, 7, 9, 2};
    std::vector<int> test3 = {3, 6, 2, 8};
    std::vector<int> test4 = {1, 4, 7, 9};

    // Display results
    std::cout << "Test 1: " << firstLast2(test1) << std::endl;
    std::cout << "Test 2: " << firstLast2(test2) << std::endl;
    std::cout << "Test 3: " << firstLast2(test3) << std::endl;
    std::cout << "Test 4: " << firstLast2(test4) << std::endl;

    return 0;
}
