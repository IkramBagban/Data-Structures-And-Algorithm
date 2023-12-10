// question link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL){
            head = NULL;
            return head;
        }

        // if(head == NULL){
        //     return head;
        // }

        ListNode* temp = head;
        int len = 1;
        while( temp->next != NULL){
            temp = temp->next;
            len++;
        };

        if(len - n == 0){
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* prevNode = NULL;
        ListNode* currNode = head;

        

        for(int i = 0; i < len - n; i++){
                prevNode = currNode;
                currNode = currNode->next;
                cout << currNode->val;
        }

        if(currNode == NULL){
            prevNode = NULL;
            return head;
        }
        else
            prevNode->next = currNode->next;

       
        delete currNode;
        return head;
    }
};