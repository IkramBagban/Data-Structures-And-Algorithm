#include <iostream>
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
    int start = 0;              // Starting index of the search interval
    int end = size - 1;         // Ending index of the search interval

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
    return 0;
}
