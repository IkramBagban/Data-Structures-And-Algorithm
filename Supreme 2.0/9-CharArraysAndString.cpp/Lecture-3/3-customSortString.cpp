// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link :- https://leetcode.com/problems/custom-sort-string/description/


class Solution {
public:
    // Declare a static string to store the custom order.
    static string str;
    
    // Comparator function to compare two characters based on their positions in the custom order.
    static bool compare(char char1, char char2) {
        // Use the find function to retrieve the positions (indices) of char1 and char2 in the custom order string.
        // Compare the positions to determine the order.
        return (str.find(char1) < str.find(char2));
    }
    
    string customSortString(string order, string s) {
        // Store the custom order in the static variable str.
        str = order;
        
        // Use the sort function to rearrange the characters in the string s according to the custom order.
        sort(s.begin(), s.end(), compare);

        // Return the sorted string.
        return s;
    }
};

// Initialize the static string str.
string Solution::str;
