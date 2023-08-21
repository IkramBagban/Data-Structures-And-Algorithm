class Solution {
public:

    // Question link - https://leetcode.com/problems/find-peak-element/description/
    
    // Note:
    // This algorithm aims to find a peak element in a given array.
    // A peak element is defined as an element that is greater than or equal to its neighbors.
    // The algorithm utilizes a modified binary search approach to efficiently locate the peak.

    // Steps:
    // 1. Initialize the search interval with start = 0 and end = nums.size() - 1.
    // 2. Enter a binary search loop as long as start < end.
    // 3. Calculate the midpoint (mid) of the current interval.
    // 4. Compare nums[mid] with nums[mid + 1]:
    //    - If nums[mid] < nums[mid + 1], move start to mid + 1 (ascending slope, peak on the right).
    //    - If nums[mid] >= nums[mid + 1], move end to mid (descending slope or plateau, peak on the left).
    // 5. Continue narrowing down the search interval until start and end meet.
    // 6. Return either start or end as the index of the peak element.
    
    int findPeakElement(vector<int>& nums) {
        int start = 0;          // Initialize the starting index of the search interval
        int end = nums.size() - 1; // Initialize the ending index of the search interval

        while (start < end) {
            int mid = start + (end - start) / 2; // Calculate the midpoint of the current interval
            if (nums[mid] < nums[mid + 1]) { // Check if the element to the right of mid is larger
                start = mid + 1; // Move start to mid + 1 (ascending slope, peak on the right)
            } else {
                end = mid; // Move end to mid (descending slope or plateau, peak on the left)
            }
        }

        return start; // Return the index of the peak element; end could also be returned (both will work)
    }
};
