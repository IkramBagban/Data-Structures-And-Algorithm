// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/valid-parentheses/
// (Leetcode)

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {

            if (!st.empty() && st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == '[' && s[i] == ']')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == '{' && s[i] == '}')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        if (st.size() > 0)
            return false;
        return true;
    }
};