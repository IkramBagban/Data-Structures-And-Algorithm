// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban


#include <iostream>
#include <vector>
using namespace std;

// Problem Statement:
// Given a vector of individual digits, merge or concatenate them to form a single integer.
// For instance, if the vector is {4,7,3,2,6}, the result should be the number 47326.

void mergeDigits(const vector<int> &v, int index, int &ans)
{
    // Base condition: if the index is out of bounds, return.
    if (index >= v.size())
    {
        return;
    }

    // Multiply the current result by 10 to shift its place value to the left,
    // and then add the current digit from the vector.
    ans = ans * 10 + v[index];

    // Move to the next digit in the vector.
    mergeDigits(v, index + 1, ans);
}

int main()
{
    // Define the vector of digits.
    vector<int> v = {4, 7, 3, 2, 6};
    int index = 0;  // Starting index.
    int ans = 0;    // Initial value of the resultant number.


    // Call the mergeDigits function.
    mergeDigits(v, index, ans);

    // Display the Result Number.
    cout << "Merged Number: " << ans << endl;

    return 0;
}
