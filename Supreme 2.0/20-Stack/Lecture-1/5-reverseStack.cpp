// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG (Easy): https://practice.geeksforgeeks.org/problems/reverse-a-stack/1

class Solution{
public:
    
    void insertAtBottom(stack<int> &s, int item) {
    if (s.empty()) {
        s.push(item);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s, item);
    s.push(temp);
}

    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        int temp = St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St, temp);k
    }
};