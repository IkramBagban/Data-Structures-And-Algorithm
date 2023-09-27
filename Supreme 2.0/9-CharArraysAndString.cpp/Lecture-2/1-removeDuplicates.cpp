// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";  // Initialize an empty string to store the result.
        int i = 0;         // Initialize an index variable for iterating through the input string.

        while (s[i] != '\0') {  // Loop until the end of the input string is reached.
            if (!temp.empty() && s[i] == temp.back()) {
                // If the 'temp' string is not empty and the current character matches the last character in 'temp':
                temp.pop_back(); // Remove the last character from 'temp' since it forms a duplicate pair.
            } else {
                temp.push_back(s[i]);  // Otherwise, append the current character to 'temp'.
            }
            i++;  // Move to the next character in the input string.
        }

        return temp;  // Return the resulting string with duplicates removed.
    }
};
