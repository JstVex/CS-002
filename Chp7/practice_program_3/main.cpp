#include <iostream>

void swapFrontBack(int arr[], int size)
{
    if (size <= 1)
        return;

    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
}

int main() {
    int array[] = {9, 2, 3, 4, 1};
    int size = 5;

    swapFrontBack(array, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    return 0;
}
