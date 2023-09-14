// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

int findLastOcc(vector<int> v, int target)
{

    int start = 0; // Initialize the start index to the beginning of the vector
    int end = v.size() - 1; // Initialize the end index to the end of the vector
    int ans = -1; // Initialize the answer to -1 (not found)

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index

        if (v[mid] == target) // If the middle element is equal to the target
        {
            ans = mid; // Update the answer with the index of the target
            start = mid + 1;  // Continue searching in the right half for the last occurrence
        }
        else if (v[mid] > target) // If the middle element is greater than the target
        {
            end = mid - 1; // Update the end index to search the left half
        }
        else
        {
            start = mid + 1; // Update the start index to search the right half
        }
    }
    return ans; // Return the index of the last occurrence (or -1 if not found)
}

int main()
{

    vector<int> v{1, 2, 2, 3, 3, 4, 4, 4, 5, 6}; // Sorted vector
    int target = 4; 
    int indexOfLasttOcc = findLastOcc(v, target);
    cout << indexOfLasttOcc;

    return 0;
}
