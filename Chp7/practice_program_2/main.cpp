#include <iostream>

int countNum2s(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 2)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int array[] = {2, 4, 2, 8, 2};
    int size = 5, count;

    count = countNum2s(array, size);
    std::cout << "There are " << count << " 2s in the array" << std::endl;
    return 0;
}
