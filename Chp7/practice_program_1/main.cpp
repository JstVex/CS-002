#include <iostream>


bool firstLast2(int arr[], int size)
{
    return (arr[0] == 2) || (arr[size - 1] == 2);
}

int main() {
    int array[] = {5, 4, 6, 8, 2};
    int size = 5;

    if (firstLast2(array, size))
    {
        std::cout << "The array starts or ends with the digit 2" << std::endl;
    } else
    {
        std::cout << "The array does not start or end with the digit 2" << std::endl;
    }
    return 0;
}
