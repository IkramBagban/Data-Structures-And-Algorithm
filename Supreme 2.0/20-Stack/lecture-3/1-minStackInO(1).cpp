// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/min-stack/description/

class MinStack {
public:
    // The stack is implemented using a vector of pairs.
    // Each pair holds the value and the current minimum value at that point in the stack.
    vector<pair<int,int> >st;

    MinStack() {
        
    }
    
    // Function to push a value onto the stack.
    void push(int val) {
        // If the stack is empty, push the value and set it as the current minimum.
        if(st.empty()){
            pair<int,int> p;
            p.first = val; // The value being pushed
            p.second = val; // The minimum value is the value itself as the stack is empty
            st.push_back(p);
        } else {
            // If the stack is not empty, push the value and update the current minimum.
            pair<int,int> p;
            p.first = val; // The value being pushed
            int prevMin = st.back().second; // Get the previous minimum value from the stack
            p.second = min(p.first, prevMin); // The minimum value is the lesser of the new value and the previous minimum
            st.push_back(p);
        }
    }
    
    // Function to pop the top element from the stack.
    void pop() {
        // Remove the top element from the stack.
        // The pair being removed contains the value and the minimum value until that point.
        st.pop_back();
    }
    
    // Function to get the top element of the stack.
    int top() {
        // Return the first element of the pair at the top of the stack, which is the value.
        return st.back().first; 
    }
    
    // Function to get the minimum element in the stack.
    int getMin() {
        // Return the second element of the pair at the top of the stack, which is the current minimum value.
        return st.back().second;
    }
};
