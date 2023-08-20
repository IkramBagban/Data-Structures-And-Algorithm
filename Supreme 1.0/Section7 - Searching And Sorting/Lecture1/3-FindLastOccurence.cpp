#include <iostream>
#include <vector>
using namespace std;

// Note:
// The lastOccurrence function utilizes a modified binary search algorithm to efficiently find the last occurrence
// of a target element in a sorted array or vector. This algorithm narrows down the search interval by comparing
// the target element with the middle element. Once the target element is found, the algorithm continues the search
// on the right half to find the last occurrence. Binary Search, with a time complexity of O(log n), proves to be
// highly effective for large datasets and situations requiring quick element retrieval.

// Q: Find the last occurrence of the given target in the array/vector.

// Function to find the index of the last occurrence of a target in a sorted vector using binary search
int lastOccurrence(const vector<int> &v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    // Perform binary search until the search interval is valid
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = v[mid];

        if (target == element)
        {
            ans = mid;
            start = mid + 1; // Continue searching on the right half
        }
        else if (element < target)
        {
            start = mid + 1; // Adjust the search interval to the right half
        }
        else
        {
            end = mid - 1; // Adjust the search interval to the left half
        }
    }

    return ans; // Return the index of the last occurrence or -1 if not found
}

int main()
{
    vector<int> v{2, 4, 2, 2, 2, 2, 6, 7, 7, 7, 7, 8, 10};
    int target = 7;
    int indexOfTarget = lastOccurrence(v, target);

    // Check if the target was found and display the appropriate message
    if (indexOfTarget != -1)
    {
        cout << "The last occurrence of the given target is at index " << indexOfTarget << endl;
    }
    else
    {
        cout << "No occurrence found for the given target." << endl;
    }

    return 0;
}
