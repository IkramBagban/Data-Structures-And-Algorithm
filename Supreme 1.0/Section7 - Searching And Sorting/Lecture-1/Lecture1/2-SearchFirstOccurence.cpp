#include <iostream>
#include <vector>
using namespace std;

// Note:
// The firstOccurrence function uses a modified binary search algorithm to find the first occurrence 
// of a target element in a sorted array or vector. The essence of this algorithm is to reduce the search 
// interval by half at each step by comparing the target element with the middle element. Once the target 
// element is found, instead of returning the index immediately, the search continues on the left half 
// to find the first occurrence. Binary Search has a time complexity of O(log n), which makes it efficient 
// for searching in large datasets.

// Q - Find the first occurrence of the given target in the array/vector.

// Function to find the first occurrence of a target in a sorted vector using binary search
int firstOccurrence(vector<int> v, int target)
{
    int start = 0;          // Initialize the starting index of the search interval
    int end = v.size() - 1; // Initialize the ending index of the search interval

    int ans = -1; // To keep track of the found occurrence's index. Initialized with -1 (not found).

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the midpoint to avoid integer overflow
        int element = v[mid];

        if (element == target)
        {
            ans = mid;         // Update the answer if target is found
            end = mid - 1;     // Move the end to left half to find the first occurrence
        }
        else if (target > element)
        {
            start = mid + 1;   // If target is greater, search in the right half
        }
        else
        {
            end = mid - 1;     // If target is smaller, search in the left half
        }
    }
    return ans; // Return the first occurrence's index or -1 if not found
}

int main()
{
    vector<int> v{2, 4, 6, 7, 7, 7, 7, 8, 10};
    int target = 7;
    int indexOfTarget = firstOccurrence(v, target);
    if (indexOfTarget != -1) // Check if the target was found
    {
        cout << "The first occurrence of the given target is at index " << indexOfTarget << endl;
    }
    else
    {
        cout << "No Occurrence found." << endl;
    }

    return 0;
}
