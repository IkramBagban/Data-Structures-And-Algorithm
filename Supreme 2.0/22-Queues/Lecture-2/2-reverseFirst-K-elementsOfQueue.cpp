// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

/**
 * Function to reverse the first k elements of a given queue.
 * Problem Statement:
 * Given a queue and an integer k, the task is to reverse the order of the first k elements of the queue,
 * leaving the other elements in the same relative order.
 *
 * Example:
 * Input Queue: 10, 20, 30, 40, 50
 * k = 3
 * Output Queue after reversing first 3 elements: 30, 20, 10, 40, 50
 *
 * @param q The original queue.
 * @param k The number of elements from the front of the queue to reverse.
 * @param size The total number of elements in the queue.
 * @return The modified queue with the first k elements reversed.
 */
queue<int> reverse_k_elements_of_queue(queue<int> q, int k, int size)
{
    stack<int> st;

    // Reverse the entire queue
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }

    // Push back the elements into the queue in reversed order
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    };

    // Dequeue size-k elements and push them onto the stack
    for (int i = 0; i < size - k; i++)
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }

    // Push back the size-k elements into the queue to maintain the order
    for (int i = 0; i < size - k; i++)
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }

    return q;
}

// Function to print the elements of the queue
void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Original Queue: " << endl;
    printQueue(q);
    cout << endl;
    cout
        << endl
        << "After reversing first k elements: " << endl;

    queue<int> a = reverse_k_elements_of_queue(q, 3, 5);
    printQueue(a);

    return 0;
}



