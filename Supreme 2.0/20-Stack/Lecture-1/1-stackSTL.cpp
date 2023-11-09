// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    st.push(10); // pushh element at top
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Size Of Stack before pop : " << st.size() << endl;
    cout << "Top Element Before pop : " << st.top() << endl; // top will give top(last) element
    cout << endl;
    st.pop(); // remove top/last element

    cout << "Size Of Stack after pop : " << st.size() << endl;
    cout << "Top Element after pop : " << st.top() << endl;
    cout << endl;

    if (st.empty()) // if stack is empty. empty() funciton will return 1 else 0
    {
        cout << "Stack Is Empty" << endl;
    }
    else
    {
        cout << "Stack Is Not Empty" << endl;
    }

    stack<int> st2;
    st2.push(1000);
    st2.push(2000);

    st.swap(st2);

    cout << "Contents of Stack st after swap with st2:" << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    if (st.empty())
    {
        cout << "Stack Is Empty" << endl;
    }
    else
    {
        cout << "Stack Is Not Empty" << endl;
    }

    cout << endl;

    return 0;
}