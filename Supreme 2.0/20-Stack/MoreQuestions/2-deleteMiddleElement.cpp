// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG (Easy): https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

class Solution
{
    public:
    void deleteMidHelper(stack<int>&s, int sizeOfStack, int mid){
        if(sizeOfStack == -1)return;
        
        if(sizeOfStack == mid){
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        
        deleteMidHelper(s,--sizeOfStack, mid);
        
        s.push(temp);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {  
        int mid = (sizeOfStack+1)/2;
        deleteMidHelper(s,sizeOfStack, mid);
    }
};