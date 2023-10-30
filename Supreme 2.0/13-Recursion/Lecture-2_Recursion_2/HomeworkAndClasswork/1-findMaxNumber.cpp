// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Recursive function to find the maximum number in a vector.
// It takes the vector v, the current index to check, and an integer reference to store the maximum value found so far.
void max(vector<int> v, int index, int &maxi) 
{
    // Base condition: If the index is equal to or greater than the size of the vector,
    // it means we have traversed the entire vector and need to return.
    if (index >= v.size()) 
    {
        return;
    }

    // Check if the current element at the given index is greater than the current maximum.
    if (v[index] > maxi)
    {
        // If yes, update the maximum.
        maxi = v[index];
    }

    // Move to the next index for the recursive call.
    max(v, index + 1, maxi);
}

int main()
{
    // Define a vector of integers.
    vector<int> v = {3, 2, 121, 5, 7, 8, 4};

    // Start checking from the first index.
    int index = 0;

    // Initialize the maximum with the smallest possible integer.
    int maxi = INT_MIN;

    // Call the recursive function to find the maximum value in the vector.
    max(v, index, maxi);

    // Print the maximum value.
    cout << "Maximum Number Is " << maxi << endl;

    return 0;
}
