#include <iostream>
#include <algorithm> // Include the algorithm library for binary_search
#include <vector>
using namespace std;

// Notes:
// Binary Search is a fast searching algorithm that works on sorted arrays.
// It repeatedly divides the search interval in half, reducing the search space.
// By comparing the target element with the middle element, it determines whether the target appears in the left or right half.
// It then eliminates the half in which the target cannot appear and continues the search on the remaining half.
// Binary Search has a time complexity of O(log n), making it highly efficient for large datasets.
// It is ideal for situations where the data is sorted, and quick retrieval of a specific element is needed.

// Function to perform binary search
int BinarySearch(int arr[], int target, int size)
{
    int start = 0;      // Starting index of the search interval
    int end = size - 1; // Ending index of the search interval

    int mid = (start + end) / 2; // Calculate the midpoint of the Selected range of array

    // Perform binary search until the search interval is valid
    while (start <= end)
    {
        int element = arr[mid]; // Get the element at the midpoint

        // TO see The iterations and value of the variables
        cout << "element = " << element << " MID = " << mid << " start = " << start << " end = " << end << endl;

        if (element == target)
        {
            return mid; // Target element found at index 'mid'
        }
        else if (target < element)
        {
            end = mid - 1; // Adjust the search interval to the left half
        }
        else
        {
            start = mid + 1; // Adjust the search interval to the right half
        }
        mid = (start + end) / 2; // Update the midpoint for the next iteration
    }

    return -1; // Target element not found in the array
}

int main()
{
    // Example array
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int target = 7; // The element to be searched

    // Call the binary search function
    int indexOfTarget = BinarySearch(arr, target, size);
    if (indexOfTarget == -1)
    {
        cout << "Target Not Found " << indexOfTarget;
    }
    else
    {
        cout << "Target Element Found At index " << indexOfTarget << endl;
    }

    // ---------------------------------------------------------------------
    // ---------------------------------------------------------------------
    // Let's explore the "binary_search" function from the STL
    // Using the built-in binary_search from the STL. To use this, we have to include the algorithm library in the header file.

    // The binary_search function from the STL is used to search for a specified value within a sorted container.
    // It takes three parameters:
    // 1. The iterator to the beginning of the container (inclusive).
    // 2. The iterator to the end of the container (exclusive).
    // 3. The value that is being searched for in the container.

    // If the specified value is found within the container, the function returns true.
    // Otherwise, if the value is not found, it returns false.

    // This function is commonly used with sorted sequences like arrays and vectors to quickly determine the presence of a value.
    // It operates on containers of any data type as long as they support comparison with the less-than operator (<).

    // Example usage:
    vector<int> v{2, 4, 6, 7, 8, 10};
    if (binary_search(v.begin(), v.end(), 16)) // searching on vector
    {
        cout << "found " << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }

    system("color 0A");


    // -----
    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // Example usage of binary_search in a sorted array
    int arr2target = 6;
    int arrSize = 8;
    if (binary_search(arr2, arr2 + arrSize, target))
    {
        cout << "Value " << arr2target << " found in the array." << endl;
    }
    else
    {
        cout << "Value " << arr2target << " not found in the array." << endl;
    }
    return 0;
}
