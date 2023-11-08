// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=submissions


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    
    }
};