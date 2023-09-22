// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search on a sorted vector 'v' to find 'target'
int binarySearch(vector<int> v, int target)
{

    int start = 0;          // Initialize the start index to the beginning of the vector
    int end = v.size() - 1; // Initialize the end index to the end of the vector
    int ans = -1;           // Initialize the answer to -1 (not found)

    // Perform binary search as long as the start index is less than or equal to the end index
    while (start <= end)
    {
        // int mid = start + (end - start) / 2; // Calculate the middle index
        int mid = start + ((end - start ) >> 1 );

        if(v[mid] == target){ // If the middle element is equal to the target
            ans = mid;        // Update the answer with the index of the target
            return ans;       // Return the index of the target
        }else if(v[mid] > target){ // If the middle element is greater than the target
            end = mid - 1;         // Update the end index to search the left half
        }else if(v[mid] < target){ // If the middle element is less than the target
            start = mid + 1;       // Update the start index to search the right half
        }
    }

    return ans; // Return the final answer (index of the target or -1 if not found)
}

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 5, 6, 7};       // Sorted vector to search in
    int target = 3;                              // Target element to find
    int indexOfTarget = binarySearch(v, target); // Call the binarySearch function
    cout << indexOfTarget;                       // Print the index of the target (or -1 if not found)

    return 0;
}
