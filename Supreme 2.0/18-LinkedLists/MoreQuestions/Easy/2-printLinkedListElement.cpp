// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG : https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=submissions

class Solution
{
    public:
    void display(Node *head)
    {
      Node* temp = head;
      while(temp != NULL){
          cout << temp->data<< " ";
          temp = temp->next;
      }
    }
};