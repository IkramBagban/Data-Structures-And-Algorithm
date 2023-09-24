// Question Link:- https://leetcode.com/problems/single-element-in-a-sorted-array/description/
// Example 1:
// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// Example 2:
// Input: nums = [3,3,7,7,10,11,11]
// Output: 10

// SOLUTION 1
class Solution
{
public:
    // Function to find the single non-duplicate element in a sorted array where all other elements appear twice.
    // The array contains pairs of elements, and only one element appears once.
    int singleNonDuplicate(vector<int> &nums)
    {
        int start = 0;             // Initialize the start index to 0.
        int end = nums.size() - 1; // Initialize the end index to the last index of the array.

        // Continue the search as long as the start index is less than the end index.
        // NOTE : AGAR (start <= end) KARENGE TO TO LOOP INFINITE CHALA JAYENGA 
        while (start < end)
        {
            int mid = start + (end - start) / 2; // Calculate the middle index.

            // Check if mid is even or odd, which determines the configuration of pairs:
            if (mid % 2 == 0)
            {
                // If mid is even, it should be part of a pair.
                // Check if the next element (mid + 1) is the same as mid.
                if (nums[mid] == nums[mid + 1])
                {
                    // If they are the same, the single element must be on the right side.
                    // So, update the start index to mid + 2.
                    start = mid + 2;
                }
                else
                {
                    // If they are different, the single element must be on the left side.
                    // So, update the end index to mid.
                    end = mid;
                }
            }
            else
            {
                // If mid is odd, it should be part of a pair.
                // Check if the previous element (mid - 1) is the same as mid.
                if (nums[mid] == nums[mid - 1])
                {
                    // If they are the same, the single element must be on the right side.
                    // So, update the start index to mid + 1.
                    start = mid + 1;
                }
                else
                {
                    // If they are different, the single element must be on the left side.
                    // So, update the end index to mid - 1.
                    end = mid - 1;
                }
            }
        }

        // The loop ends when start is pointing to the single non-duplicate element.
        return nums[start];
    }
};

// ==========================================================

// SOLUTION 2
// Approach of this Solution:
// Initialize two pointers, left and right, to the first and last indices of the input array, respectively.
// While the left pointer is less than the right pointer:
// a. Compute the index of the middle element by adding left and right and dividing by 2.
// b. If the index of the middle element is odd, subtract 1 to make it even.
// c. Compare the middle element with its adjacent element on the right:
// i. If the middle element is not equal to its right neighbor, the single element must be on the left side of the array, so update the right pointer to be the current middle index.
// ii. Otherwise, the single element must be on the right side of the array, so update the left pointer to be the middle index plus 2.
// When the left and right pointers converge to a single element, return that element.
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (mid % 2 == 1)
            {
                mid--;
            }
            if (nums[mid] != nums[mid + 1])
            {
                right = mid;
            }
            else
            {
                left = mid + 2;
            }
        }
        return nums[left];
    }
};