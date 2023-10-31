// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Problem Statement:
// Given a string and a target character, find all occurrences (indices) of the target character in the string.

// Recursive function to find all occurrences of the target character in the string.
// Parameters:
// - s: the input string
// - index: the current index being checked
// - v: a vector to store the indices where the target character occurs
// - target: the character to be searched for
void allOccurenceOfChar(const string &s, int index, vector<int> &v, const char &target)
{
    // Base condition: if the index is out of bounds of the string, return.
    if (index >= s.size())
        return;

    // If the current character matches the target, store its index in the vector.
    if (s[index] == target)
    {
        v.push_back(index);
    }

    // Move to the next character in the string.
    allOccurenceOfChar(s, index + 1, v, target);
}

int main()
{       
    string s = "my name is ikram bagban";
    int index = 0;  // Starting index.
    vector<int> v;  // Vector to store indices of occurrences.
    char target = 'a';  // Character to be searched for.

    // Call the function to find occurrences of the target character.
    allOccurenceOfChar(s, index, v, target);

    // Display the indices of occurrences of the target character.
    cout << "Indices of character '" << target << "' in the string: ";
    for(auto idx : v){
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
