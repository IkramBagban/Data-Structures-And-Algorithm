#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// leet code - https://leetcode.com/problems/majority-element/description/

// Question:
// Find the majority element in an array. A majority element appears more than ⌊n/2⌋ times, where n is the size of the array. If no majority element exists, return -1.

// Input: nums = {3, 2, 3, 2, 2, 2, 6}
// Output: 2
// Explanation: In the given array, the element 2 appears 4 times out of 7, which is more than ⌊7/2⌋ = 3.

int findMajorityElement(vector<int> nums)
{
    // Initialize the majority element index 'm' and its counter.
    int m = 0;
    int counter = 0;

    // Get the size of the input vector.
    int end = nums.size();

    // Sort the input vector in ascending order.
    sort(nums.begin(), nums.end());

    // Iterate through the sorted vector.
    for (int i = 0; i < end; i++)
    {
        // If the current element is the same as the element at index 'm',
        // increment the counter.
        if (nums[i] == nums[m])
        {
            counter++;
        }
        else
        {
            // If the current element is different from the element at index 'm',
            // reset the counter to 1 and update 'm' to the current index.
            counter = 1;
            m = i;
        }

        // If the counter exceeds half the size of the vector,
        // the element at index 'm' is the majority element.
        if (counter > end / 2)
        {
            return nums[m];
        }

        // This condition will never be true since 'i' will always be less than 'end'.
        // It can be safely removed.
        if (i > end)
            return -1;
    }

    // If no majority element is found, return -1.
    return -1;
}

int main()
{

    // vector<int>nums {2, 2, 3, 5, 2, 2, 6}; // output 2
    // vector<int>nums {3, 3, 4, 2, 4, 4, 4, 4, 1, 4}; // output 4
    // vector<int>nums {7, 7, 1, 1, 3, 7, 7, 2, 2, 7, 7}; // output 7
    // vector<int>nums { 3, 6, 7, 8, 5, 5, 9, 10, 5, 11, 5, 5, 12, 5, 5, 13,5, 5, 5 }; // output 5
    vector<int> nums{1, 2, 3, 4, 4, 4, 4, 4, 4, 6, 2}; // output -1
    // vector<int>nums {1,2,3,4,5,5,6}; // output -1

    int majorityElement = findMajorityElement(nums);
    cout << "The majority element is " << majorityElement;
    return 0;
}
