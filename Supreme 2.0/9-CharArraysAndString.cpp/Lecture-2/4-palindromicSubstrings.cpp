// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question link : https://leetcode.com/problems/palindromic-substrings/


class Solution {
public:
    // Function to expand around the center and count palindromic substrings
    int expand(string s, int i, int j) {
        int count = 0;

        // Expand while the characters at indices i and j are the same, and within bounds
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    // Function to count all palindromic substrings in the given string
    int countSubstrings(string s) {
        int totalCount = 0;

        // Iterate through each character in the string as a potential center
        for (int center = 0; center < s.length(); center++) {
            // Count palindromic substrings with odd length
            int oddLengthCount = expand(s, center, center);
            // Count palindromic substrings with even length
            int evenLengthCount = expand(s, center, center + 1);

            // Update the total count with the counts from both cases
            totalCount = totalCount + oddLengthCount + evenLengthCount;
        }
        return totalCount;
    }
};
