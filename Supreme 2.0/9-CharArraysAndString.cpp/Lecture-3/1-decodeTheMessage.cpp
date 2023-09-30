// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question link : https://leetcode.com/problems/decode-the-message/solutions/

class Solution {
public:
    string decodeMessage(string key, string message) {

        // Initialize the starting character for mapping
        char start = 'a';

        // Create an array to map characters to their encoded values
        char mapping[256] = {0};

        // Iterate through the characters in the key
        for(auto ch: key){
            // Check if the character is not a space and hasn't been mapped yet
            if(ch!= ' ' && mapping[ch] == 0){
                // Map the character to the next available character ('a' and so on)
                mapping[ch] = start;
                start++;
            } 
        }

        // Initialize an empty string to store the decoded message
        string ans = "";

        // Iterate through the characters in the message
        for(auto ch: message){
            if(ch == ' '){
                // If the character is a space, append it to the decoded message
                ans.push_back(' ');
            }else{
                // If the character is not a space, append its mapped value to the decoded message
                ans.push_back(mapping[ch]);
            }
        }
        
        return ans;        
    }
};
