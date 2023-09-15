// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing element in a sorted vector 'v' containing consecutive integers
int findMissingElement(vector<int> v)
{
    int start = 0; // Initialize the start index to the beginning of the vector
    int end = v.size() - 1; // Initialize the end index to the end of the vector
    int missingElement = -1; // Initialize the missingElement to -1 (not found)

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index

        if (v[mid] - mid != 1)
        {
            // If the difference between the value at 'mid' and 'mid' itself is not 1,
            // it means there is a missing element before 'mid.'
            end = mid - 1; // Update the end index to search the left half
            missingElement = mid + 1; // Update the missing element to 'mid + 1'
        }
        else
        {
            start = mid + 1; // If the difference is 1, continue searching in the right half
        }
    }
    return missingElement; // Return the missing element (or -1 if not found)
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12}; // Sorted vector with consecutive integers
    int missingElement = findMissingElement(v); 
    cout << "Missing Element: " << missingElement;

    return 0;
}
