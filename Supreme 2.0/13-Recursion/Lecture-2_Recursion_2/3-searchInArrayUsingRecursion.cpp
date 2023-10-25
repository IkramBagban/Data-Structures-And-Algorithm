// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// Function to search for a target element in an array recursively
int printArray(int *arr, int size, int target, int index)
{
    // Check if we've reached the end of the array
    if (index == size)
        return -1; // Target not found

    // Check if the current element matches the target
    if (target == arr[index])
        return index; // Target found

    // If the target is not found at the current index, continue searching recursively
    return printArray(arr, size, target, index + 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    int targetIndex = printArray(arr, 5, target, 0);
    cout << targetIndex << endl;

    return 0;
}
