// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

int count(int arr[], int n, int x)
{
    int start = 0;          // Initialize the start index to the beginning of the array.
    int end = n - 1;        // Initialize the end index to the last element of the array.
    int rightOccIndex = -1; // Initialize the index to track the rightmost occurrence of x with -1.
    int leftOccIndex = -1;  // Initialize the index to track the leftmost occurrence of x with -1.

    // Search for the rightmost occurrence of x.
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index.

        if (x < arr[mid]) // If x is smaller than the middle element,
        {
            end = mid - 1; // search in the left half of the array.
            continue;      // skip the iteration.
        }
        else if (x == arr[mid]) // If x is equal to the middle element,
        {
            rightOccIndex = mid; // Update the rightmost occurrence index.
        }
        start = mid + 1; // Move the 'start' index to search in the right half of the array.
    }

    // Reset the start and end variables to search for the leftmost occurrence.
    start = 0;
    end = n - 1;
    // Search for the leftmost occurrence of x.
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index.

        if (x > arr[mid]) // If x is greater than the middle element,
        {
            start = mid + 1; // Adjust the 'start' index to search in the right half of the array.
            continue;         // skip the iteration.
        }
        else if (x == arr[mid]) // If x is equal to the middle element,
        {
            leftOccIndex = mid; // Update the leftmost occurrence index.
        }
        end = mid - 1; // Move the 'end' index to search in the left half of the array.
    }

    // If both rightmost and leftmost occurrences are found,
    // calculate the total occurrences and return it.
    if (rightOccIndex != -1 && leftOccIndex != -1)
    {
        return rightOccIndex - leftOccIndex + 1;
    }
    return 0; // If x is not found in the array, return 0.
}

int main()
{

    int Arr[] = {1, 1, 2, 2, 2, 2, 3};
    // int Arr[] = {10, 11};
    int target = 3;
    int size = 7;
    int total = count(Arr, size, target);
    cout << total;

    return 0;
}