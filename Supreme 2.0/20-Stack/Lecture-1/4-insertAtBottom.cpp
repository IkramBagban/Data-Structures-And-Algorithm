// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG (Easy): https://practice.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

class Solution{
public:
    void insertAtBottomHelper(stack<int> &St,int X,int size){
        
        if(size == 0){
            St.push(X);
            return;
        }
        
        int temp = St.top();
        St.pop();
        
        insertAtBottomHelper(St, X , --size);
        St.push(temp);
        
    }
    stack<int> insertAtBottom(stack<int> St,int X){
        int size = St.size();
        insertAtBottomHelper(St, X , size);
        
        return St;
    }
};