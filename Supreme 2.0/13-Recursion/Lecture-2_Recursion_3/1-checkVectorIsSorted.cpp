// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

// Problem Statement:
// Given a vector of integers, determine whether the vector is sorted in ascending order.

// Recursive function to check if a vector is sorted.
// Parameters:
// - v: the input vector of integers
// - index: the current index being checked
bool isSorted(vector<int> &v, int index)
{
    // Base condition: If we have checked all the elements of the vector, it means it is sorted.
    if (index >= v.size())
        return true;

    // Compare the current element with the previous one.
    // Since we start with index 1, v[index-1] is valid and refers to the previous element.
    if (v[index] > v[index - 1])
    {
        // If the current element is greater than the previous one,
        // then check for the rest of the vector.
        bool aageKaAns = isSorted(v, index + 1);
        return aageKaAns;
    }
    else
    {
        // If at any index, the current element is not greater than the previous one, the vector is not sorted.
        return false;
    }
}

int main()
{
    // test cases
    vector<int> v = {10, 20, 30, 40, 50};
    // vector<int> v = {10};
    // vector<int> v = {};

    // Start checking from the second element because we need to compare
    // each element with its previous element.
    // This is why we start with index 1 instead of index 0.
    int index = 1;

    if (isSorted(v, index))
    {
        cout << "The given vector is sorted" << endl;
    }
    else
    {
        cout << "The given vector is not sorted" << endl;
    }

    return 0;
}
