// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question link : https://leetcode.com/problems/valid-palindrome-ii/


class Solution {
public: 
    // Function to check if a substring of 's' from index 'i' to 'j' is a palindrome.
    bool checkPalindrome(string s, int i, int j){
        while(i < j){
            if(s[i] == s[j]){
                i++;  // Move the left pointer to the right.
                j--;  // Move the right pointer to the left.
            } else {
                return false;  // If characters don't match, it's not a palindrome.
            }
        }
        return true;  // If the loop finishes, the substring is a palindrome.
    }

    // Function to check if 's' can become a palindrome by removing at most one character.
    bool validPalindrome(string s) {
        int i = 0;  // Initialize a left pointer at the beginning of the string.
        int j = s.length() - 1;  // Initialize a right pointer at the end of the string.

        while(i < j){
            if(s[i] == s[j]){
                i++;  // Move the left pointer to the right.
                j--;  // Move the right pointer to the left.
            } else {
                // If characters don't match, check if removing one character from the left or right
                // can make the remaining substring a palindrome.
                bool isPalindrome1 = checkPalindrome(s, i + 1, j);
                bool isPalindrome2 = checkPalindrome(s, i, j - 1);

                return isPalindrome1 || isPalindrome2;  // Return true if either option is a valid palindrome.
            }
        }
        return true;  // If the loop finishes without returning false, 's' can be a valid palindrome.
    }
};
