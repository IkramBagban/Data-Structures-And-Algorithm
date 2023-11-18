// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// pura logic same haiF
// pehle ye tha
// for (int i = v.size() - 1; i >= 0; i--)

// ab ye hai
// for (int i = 0; i <v.size() ; i++)
// baaki sab same hai

void prevSmallerElement(vector<int> v, vector<int> &result)
{
    // Using a stack to keep track of elements' indices
    stack<int> st;

    for (int i = 0; i < v.size(); i++)
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
    vector<int> result(v.size());
    prevSmallerElement(v, result);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}
