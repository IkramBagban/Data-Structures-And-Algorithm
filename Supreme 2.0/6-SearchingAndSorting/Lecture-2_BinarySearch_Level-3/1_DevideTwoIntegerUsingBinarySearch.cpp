// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// My Leetcode :- https://leetcode.com/ikrambagban/
//question Link :- https://docs.google.com/spreadsheets/d/1ss2teUtoT-Mb58Jmp5WcjcPo1AUzTHBCI58giwRZ73o/edit#gid=0

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Use long long int to handle potential overflow
        long long int start = 0;
        long long int end = abs((long long int) dividend); // Get the absolute value of dividend
        int quotient = 0;

        // Handle the special case where dividend is INT_MIN and divisor is -1 to prevent overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        while (start <= abs(end)) {
            long long int mid = start + (end - start) / 2; // Calculate the middle value
            long long int temp = mid * abs(divisor); // Calculate the product of mid and absolute divisor

            if (temp == abs(dividend)) {
                // Check the sign(positive or negative) of the result and return the appropriate quotient
                if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0) {
                    return -mid;
                }
                return mid;
            } else if (temp < abs(dividend)) {
                // If the temp is less than the absolute dividend, update the quotient and search in the right half
                quotient = mid;
                start = mid + 1;
            } else {
                // If the temp is greater than the absolute dividend, search in the left half
                end = mid - 1;
            }
        }

        // Check the sign(Negative or postive) of the result and return the appropriate quotient
        if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0) {
            return -quotient;
        }
        return quotient;
    }
};
