// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://practice.geeksforgeeks.org/problems/queue-reversal/1

class Solution
{
public:
    // Function to reverse the elements of a queue
    queue<int> rev(queue<int> q)
    {
        stack<int> st; // Creating a stack to hold the elements temporarily

        // Iteration 1: Transfer elements from the queue to the stack
        // This loop will run until the queue becomes empty
        while (!q.empty()) {
            int temp = q.front(); // Get the front element of the queue
            q.pop();              // Remove the front element from the queue
            st.push(temp);        // Push the element onto the stack
        }

        // At this point, the stack contains the elements of the queue in reversed order

        // Iteration 2: Transfer elements back to the queue from the stack
        // This loop will run until the stack becomes empty
        while (!st.empty()) {
            int temp = st.top(); // Get the top element of the stack
            st.pop();            // Remove the top element from the stack
            q.push(temp);        // Enqueue the element back into the queue
        }

        // Now, the queue contains the elements in reversed order
        return q; // Return the reversed queue
    }
};
