// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

// ---------------------
// PROBLEM STATEMENT:
// ---------------------
// Given a string as input, we need to find and print all possible subsequences of the string.
// For example:
// Input: "abc"
// Output: (empty string), a, b, c, ab, ac, bc, abc

// Recursive function to generate and print all subsequences of a string.
void findSubsequencesOfString(string input, string output, int index)
{
    if (index >= input.size())
    {
        cout << "=> " << output << endl; // Each time the base condition is hit, a unique subsequence is printed.
        return;
    }

    // NOTE 1: The principle used here is the "include-exclude" pattern.
    // It's a crucial concept in recursive solutions, forming the base for various problems.

    // NOTE 2: At each step, for every character, we have 2 choices -
    // either to "include" it in our subsequence or to "exclude" it.
    // This leads to two recursive calls per character.

    // "Include" the current character in the subsequence.
    output.push_back(input[index]); // Modify the 'output' by adding the character.
    findSubsequencesOfString(input, output, index + 1);

    // "Exclude" the current character from the subsequence.
    output.pop_back(); // NOTE 3: Backtrack by removing the added character to explore the "exclude" scenario.
    findSubsequencesOfString(input, output, index + 1);
}

int main()
{
    string input = "abc";
    string output = "";
    int index = 0;

    findSubsequencesOfString(input, output, index);

    return 0;
}

// NOTE 4: The total number of subsequences for a string of size 'n' is 2^n.
// This is because we have 2 choices (include/exclude) for each of the 'n' characters.
// However, this also implies that this recursive solution has an exponential time complexity.
