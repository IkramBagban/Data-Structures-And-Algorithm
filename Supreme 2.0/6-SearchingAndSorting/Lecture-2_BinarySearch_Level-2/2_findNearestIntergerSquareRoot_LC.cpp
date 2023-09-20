// // question link :- https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        int start = 0; // Initialize the start of the search range.
        int end = x; // Initialize the end of the search range.
        int sqrt = 0; // Initialize a variable to store the square root.

        while (start <= end) { // Perform a binary search.
            long long int mid = start + (end - start) / 2; // Calculate the middle value using long long to prevent overflow.

            if (mid * mid == x) { // If the square of the middle value equals x, we found the square root.
                return mid;
            } else if (mid * mid < x) { // If the square of the middle value is less than x,
                sqrt = mid; // Update the potential square root value.
                start = mid + 1; // Adjust the search range to the right half.
            } else { // If the square of the middle value is greater than x,
                end = mid - 1; // Adjust the search range to the left half.
            }
        }
        return sqrt; // Return the floor value of the square root.
    }
};
