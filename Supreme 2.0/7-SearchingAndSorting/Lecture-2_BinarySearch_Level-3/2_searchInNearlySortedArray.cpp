// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Function to search for a target element in a nearly sorted array.
// A nearly sorted array is an array where an element at index i can be at index (i-1), i, or (i+1).
// This function returns the index of the target element if found, or -1 if not found.
int search(vector<int> nums, int target)
{
    int start = 0;             // Initialize the start index to 0.
    int end = nums.size() - 1; // Initialize the end index to the last index of the array.

    // Continue the search as long as the start index is less than or equal to the end index.
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index of the current search range.

        if (nums[mid] == target)
            // If the middle element is equal to the target, return its index as it's found.
            return mid;
        else if (mid + 1 <= end && nums[mid + 1] == target)
            // Check if the element to the right of the middle (mid + 1) is equal to the target.
            // If yes, return the index of the element to the right.
            return mid + 1;
        else if (mid - 1 >= 0 && nums[mid - 1] == target)
            // Check if the element to the left of the middle (mid - 1) is equal to the target.
            // If yes, return the index of the element to the left.
            return mid - 1;
        else if (target < nums[mid])
        {
            // If the target is smaller than the middle element,
            // it means the target should be on the left side of the middle.
            // Adjust the search range to the left half.
            end = mid - 2;
        }
        else
        {
            // If the target is larger than the middle element,
            // it means the target should be on the right side of the middle.
            // Adjust the search range to the right half.
            start = mid + 2;
        }
    }

    return -1; // Return -1 if the target element is not found in the array.
}

int main()
{

    // vector<int> nums = {5,10,20,30, 50, 40, 70, 60};
    // int target = 0;

    vector<int> nums = {5, 10, 15, 20, 25};
    int target = 15 ;

    // vector<int> nums = {10, 5};
    // int target = 5;

    // vector<int>nums =  {5, 10, 15, 20};
    // int target = 25;

    // vector<int>nums =  {5, 10, 15, 20, 25};
    // int target = 25;

    // vector<int>nums =  {5, 10, 15, 20, 25};
    // int target = 5;

    int targetIndex = search(nums, target);
    cout << targetIndex << endl;

    return 0;
}