// Question Link :- https://leetcode.com/problems/search-in-rotated-sorted-array/
// My Leetcode :- https://leetcode.com/ikrambagban/

class Solution
{
public:
    // Function to find the index of the pivot element in a rotated sorted array
    int findPivotElement(vector<int> v)
    {
        int start = 0;                // Initialize the start index to the beginning of the vector
        int end = v.size() - 1;       // Initialize the end index to the end of the vector
        int IndexOfPivotElement = -1; // Initialize the IndexOfPivotElement to -1 (not found)

        while (start <= end)
        {
            int mid = start + (end - start) / 2; // Calculate the middle index

            // Check if the middle element (v[mid]) is greater than both the first element (v[start]) and the last element (v[end])
            if (v[mid] > v[start] && v[mid] > v[end])
            {
                start = mid; // If it is, update the start index to search in the right half
            }
            else if (start == mid && v[mid] < v[end])
            {
                start = mid + 1;
            }
            else
            {
                end = end - 1; // Otherwise, update the end index to search in the left half
            }
            IndexOfPivotElement = mid; // Update the IndexOfPivotElement with the current mid
        }
        return IndexOfPivotElement; // Return the index of the pivot element
    }

    // Function to perform binary search for a target in a sorted array
    int binarySearch(vector<int> nums, int target, int start, int end)
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }

    // Function to search for a target in a rotated sorted array
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        int pivotIndex = findPivotElement(nums); // Find the index of the pivot element

        int targetIndex = -1;
        if (pivotIndex != -1 && nums[pivotIndex] >= target && nums[start] <= target)
        { // If the target may be in the left half (line number A)
            targetIndex = binarySearch(nums, target, start, pivotIndex);
        }
        else
        { // If the target may be in the right half (line number B)
            targetIndex = binarySearch(nums, target, pivotIndex + 1, end);
        }

        return targetIndex;
    }
};
