// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
using namespace std;

// Function to find the pivot element in a rotated sorted array
// A pivot element is the largest element in the array and separates the array into two sorted subarrays.
int findPivotElement(vector<int> v)
{
    int start = 0; // Initialize the start index to the beginning of the vector
    int end = v.size() - 1; // Initialize the end index to the end of the vector
    int IndexOfPivotElement = -1; // Initialize the IndexOfPivotElement to -1 (not found)

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle index

        // Check if the middle element (v[mid]) is greater than both the first element (v[start]) and the last element (v[end])
        if (v[mid] > v[start] && v[mid] > v[end])
        {
            start = mid; // If it is, update the start index to search in the right half
        }
        else
        {
            end = end - 1; // Otherwise, update the end index to search in the left half
        }
        IndexOfPivotElement = mid; // Update the IndexOfPivotElement with the current mid
    }
    return IndexOfPivotElement; // Return the index of the pivot element
}

int main()
{
    // Example test cases
    vector<int> v1{7, 9, 2, 3};
    vector<int> v2{9, 10, 1, 2, 3};
    vector<int> v3{30, 40, 50, 10, 20};
    vector<int> v4{}; // Empty array
    vector<int> v5{3, 8, 10, 17, 1}; 
    vector<int> v6{3}; 

    // Call the findPivotElement function for each test case
    int IndexOfPivotElement1 = findPivotElement(v1);
    int IndexOfPivotElement2 = findPivotElement(v2);
    int IndexOfPivotElement3 = findPivotElement(v3);
    int IndexOfPivotElement4 = findPivotElement(v4);
    int IndexOfPivotElement5 = findPivotElement(v5);
    int IndexOfPivotElement6 = findPivotElement(v6);

    // Print the results
    cout << "Index Of Pivot Element 1: " << IndexOfPivotElement1 << endl;
    cout << "Index Of Pivot Element 2: " << IndexOfPivotElement2 << endl;
    cout << "Index Of Pivot Element 3: " << IndexOfPivotElement3 << endl;
    cout << "Index Of Pivot Element 4: " << IndexOfPivotElement4 << endl;
    cout << "Index Of Pivot Element 5: " << IndexOfPivotElement5 << endl;
    cout << "Index Of Pivot Element 6: " << IndexOfPivotElement6 << endl;

    return 0;
}
