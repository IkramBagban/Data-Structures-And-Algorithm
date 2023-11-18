// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Question : Next Smaller Element
// Example:
// Given vector: [8, 4, 6, 2, 3]
// Next smaller elements: [4, 2, 2, -1, -1]
// Explanation:
// For 8, next smaller is 4.
// For 4, next smaller is 2.
// For 6, next smaller is 2.
// For 2 and 3, no smaller elements to the right, so -1.

void nextSmallerElement(vector<int> v, vector<int> &result)
{
    // Using a stack to keep track of elements' indices
    stack<int> st;

    // Looping through the vector from the end to the start
    for (int i = v.size() - 1; i >= 0; i--)
    {
        // Pop elements from stack while the current element is smaller than the element at the stack's top
        while (!st.empty() && v[i] <= v[st.top()])
        {
            st.pop();
        }

        // If the stack is empty, it means there is no smaller element to the right
        result[i] = st.empty() ? -1 : v[st.top()];

        // Push the current index onto the stack
        st.push(i);
    }
}

int main()
{
    vector<int> v{8, 4, 6, 2, 3};
    vector<int> result(v.size()); // Vector to store the result
    nextSmallerElement(v, result);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}

// Approach:
// The function nextSmallerElement finds the next smaller element to the right for each element in the given vector.
// It iterates through the vector in reverse order, maintaining a stack of indices to find the next smaller element.
// The stack helps in keeping track of elements for which a smaller element to the right is not yet found.
// If the stack's top element is larger than the current element, the current element's index is pushed onto the stack.
// Otherwise, the stack is popped until a smaller element is found or it becomes empty.


// Time Complexity (TC): O(2N), effectively O(N), as each element in the vector of size N is pushed and popped from the stack at most once.
// Space Complexity (SC): O(N), due to the stack used to store indices of elements, which in the worst case can contain all N elements.
