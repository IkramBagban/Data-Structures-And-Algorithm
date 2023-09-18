
// question link :- https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0; // Initialize the start index with 0.
        int end = nums.size() - 1; // Initialize the end index with size-1.
        vector<int> ans(2, -1); // Initialize a vector to store indexex with size 2.

        // First Binary Search : Find the leftmost occurrence of the target.
        while (start <= end) {
            int mid = start + (end - start) / 2; // Calculate the middle index.

            if (nums[mid] == target) { // If the middle element is equal to the target,
                ans[0] = mid; // Update the leftmost index in the result.
                end = mid - 1; // Continue searching in the left half of the array.
            } else if (nums[mid] > target) { // If the middle element is greater than the target,
                end = mid - 1; // Adjust the 'end' index to search in the left half.
            } else {
                start = mid + 1; // Adjust the 'start' index to search in the right half.
            }
        }

        // Reset start and end indices for the second binary search.
        start = 0;
        end = nums.size() - 1;

        // Second Binary Search: Find the rightmost occurrence of the target.
        while (start <= end) {
            int mid = start + (end - start) / 2; // Calculate the middle index.

            if (nums[mid] == target) { // If the middle element is equal to the target,
                ans[1] = mid; // Update the rightmost index in the result.
                start = mid + 1; // Continue searching in the right half of the array.
            } else if (nums[mid] > target) { // If the middle element is greater than the target,
                end = mid - 1; // Adjust the 'end' index to search in the left half.
            } else {
                start = mid + 1; // Adjust the 'start' index to search in the right half.
            }
        }

        return ans; // Return the result containing leftmost and rightmost indices of the target.
    }
};
