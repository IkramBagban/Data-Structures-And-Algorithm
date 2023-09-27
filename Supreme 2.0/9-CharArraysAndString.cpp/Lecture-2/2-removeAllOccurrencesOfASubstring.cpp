// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

// question link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        // jab tak occurence milengi tab tak ye loop chalta rahenga.
        while (s.find(part) != string::npos)
        {

            // s.find se index mil jayengi. and part.length se length. to ye find wali index se part ki length tak saare letters delete kardenga.
            s.erase(s.find(part), part.length());
        }

        return s;
    }
};