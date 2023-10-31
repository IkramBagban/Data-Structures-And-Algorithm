// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
#include <vector>
using namespace std;

// Problem Statement:
// Given a sorted vector of integers, implement the binary search algorithm 
// to find the index of a target number if it exists, else return -1.

// Recursive function to perform binary search.
int binarySearch(vector<int> v, int s, int e, int target)
{
    // Base condition: If start is greater than end, target number is not present.
    if (s > e)
    {
        return -1;
    }

    // Calculate the middle index.
    int mid = s + (e - s) / 2;

    // If the element at mid index is the target, we've found our number.
    if (v[mid] == target)
    {
        return mid;
    }

    // If the element at mid index is greater than target, 
    // it means target might be on the left side of mid.
    if (v[mid] > target)
    {
        e = mid - 1;
    }
    // Otherwise, target might be on the right side of mid.
    else
    {
        s = mid + 1;
    }

    // Recursive call with updated start or end.
    return binarySearch(v, s, e, target);
}

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    int s = 0;
    int e = v.size() - 1;

    int target = 10;

    int indexOfTarget = binarySearch(v, s, e, target);
    if(indexOfTarget != -1) 
    {
        cout << "The target " << target << " was found at index: " << indexOfTarget << endl;
    } 
    else 
    {
        cout << "The target " << target << " was not found in the vector." << endl;
    }

    return 0;
}
