// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Recursive function to double the value of each element in a vector.
// Parameters:
// - v: The vector whose elements are to be doubled.
// - index: The current index being processed.
void doubleNumbers(vector<int> &v, int index)
{
    // Base condition: If the index is equal to or greater than the size of the vector,
    // this means we have processed all the elements, and the recursion should stop.
    if (index >= v.size())
    {
        return;
    }

    // Double the value of the current element.
    v[index] = v[index] * 2;

    // Process the next element in the vector.
    doubleNumbers(v, index + 1);
}

int main()
{
    // Initialize a vector of integers.
    vector<int> v = {2,4,6,8,10,12};

    cout << "Original numbers:" << endl;
    // Display the elements of the vector before doubling.
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    // Double the values of the elements in the vector.
    doubleNumbers(v, 0);

    cout << "Numbers after doubling:" << endl;
    // Display the elements of the vector after doubling.
    for (auto element : v)
    {
        cout << element << " ";
    }

    return 0;
}
