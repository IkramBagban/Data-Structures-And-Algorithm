// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> v, vector<int> &result)
{
    stack<int> st;
    st.push(-1);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << "Main loop " << i << " ";
        while (st.top() >= v[i])
        {
            cout << "inner loop loop ";
            st.pop();
        }
        cout << endl;
        result[i] = st.top();
        st.push(v[i]);
    }

    return result;
}

int main()
{

    vector<int> v{8, 4, 6, 2, 3};
    vector<int> result(v.size());
    vector<int> a = nextSmallerElement(v, result);

    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}