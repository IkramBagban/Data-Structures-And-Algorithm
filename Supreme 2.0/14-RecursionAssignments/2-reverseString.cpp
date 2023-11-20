// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question (GFG) : https://practice.geeksforgeeks.org/problems/reverse-a-string/1

// Approach 1 (Approach is better)
// Time Complexity: O(n^2)
// because each insert operation in str.insert(str.begin(), ch);
// can take up to o(n), and this operation happens n times.

// Space Complexity: O(n)
// due to the call stack of the recursive calls,
// where n is the depth of the recursion.class Solution
class Solution
{
public:
    void reverseWordHelper(string &str)
    {

        if (str.empty())
            return;

        char ch = str.back();
        str.pop_back();
        reverseWordHelper(str);
        str.insert(str.begin(), ch);
    }

    string reverseWord(string str)
    {
        reverseWordHelper(str);
        return str;
    }
};

// Approach 2 : dono me se ye better hai.
// Time Complexity: O(n)
// Space Complexity: O(n) // due to the call stack of the recursive calls.

class Solution
{
public:
    void reverseWordHelper(string &str, int start, int end)
    {

        if (start >= end)
            return;

        swap(str[start], str[end]);
        reverseWordHelper(str, start + 1, end - 1);
    }
    
    string reverseWord(string str)
    {
        int start = 0;
        int end = str.size() - 1;
        reverseWordHelper(str, start, end);
        return str;
    }
};