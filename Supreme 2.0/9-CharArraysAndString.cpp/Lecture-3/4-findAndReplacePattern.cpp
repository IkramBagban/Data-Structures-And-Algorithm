// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/find-and-replace-pattern/

class Solution {
public:
    // Function to map characters in a string to consecutive letters starting from 'a'.
    void map(string &str){
        char mapping[256] = {0}; // Initialize a character mapping array with zeros.
        char start = 'a'; // Initialize the starting character for mapping.

        // Iterate through the characters in the input string.
        for(auto ch: str){
            if(mapping[ch] == 0){
                mapping[ch] = start; // Map the character to the current start character.
                start++; // Increment the start character for the next unique character.
            }
        }

        // Update the input string to contain mapped characters.
        for(int i = 0; i< str.length(); i++){
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    // Function to find and replace patterns in a vector of words.
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        // Map the pattern string to a unique character mapping.
        map(pattern);
        vector<string> ans; // Initialize a vector to store matching words.

        // Iterate through the words in the input vector.
        for(auto str: words){
            string tempStr = str; // Create a temporary copy of the word.
            map(str); // Map the characters in the word.

            // If the mapped word matches the mapped pattern, add it to the result vector.
            if(str == pattern) ans.push_back(tempStr);
        }

        return ans; // Return the vector of matching words.
    }
};
