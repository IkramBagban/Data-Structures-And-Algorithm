// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/min-stack/description/

class MinStack {
public:
    vector<pair<int,int> >st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }else{
            pair<int,int> p;
            p.first = val;
            int prevMin = st.back().second;
            p.second = min(p.first, prevMin);
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};