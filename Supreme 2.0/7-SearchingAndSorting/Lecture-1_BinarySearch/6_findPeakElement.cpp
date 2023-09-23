// question link : https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0; // Initialize the start index to the beginning of the array
        int end = arr.size() - 1; // Initialize the end index to the end of the array

        while (start < end)
        {
            int mid = start + (end - start) / 2; // Calculate the middle index

            if (end - start == 1) {
                // If there are only two elements left, return the start index
                // This is the peak as it's the highest among the two
                return start;
            }
            else if (arr[mid] > arr[mid - 1])
            {
                // If the middle element is greater than the element before it,
                // it means the peak is in the right half of the array
                start = mid; // Update the start index to mid
            }
            else
            {
                // If the middle element is not greater, it means the peak is in the left half
                end = mid; // Update the end index to mid
            }
        }
        return start; // Return the index of the peak
    }
};
