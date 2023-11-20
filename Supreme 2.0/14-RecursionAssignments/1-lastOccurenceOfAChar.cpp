// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question (GFG) : https://practice.geeksforgeeks.org/problems/last-index-of-a-character-in-the-string4516/1

class Solution
{
public:
    int LastIndexHelper(string s, char p, int index)
    {
        if (index < 0)
            return -1;

        if (p == s[index])
            return index;

        return LastIndexHelper(s, p, index - 1);
    }

    int LastIndex(string s, char p)
    {
        int index = s.size() - 1;
        return LastIndexHelper(s, p, index);
    }
};