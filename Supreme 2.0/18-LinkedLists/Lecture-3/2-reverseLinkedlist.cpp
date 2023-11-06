// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/reverse-linked-list/description/
// there is also a recursive solution of this question. 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Initialize three pointers as described
        // prevNode will eventually become the new head of the reversed list
        ListNode* prevNode = NULL;
        // currNode is the current node that we're looking to reverse
        ListNode* currNode = head;
        // nextNode is used to temporarily store the next node

        // Iterate through the list until we reach the end
        while(currNode != NULL){
            ListNode* nextNode = currNode->next; // Save the next node. agar ham nextNode save ni karenge to ham track kho denge.
            // important hai. ye yaad rakhna HAi.

            // 1->2->3->NULL agar list aisi hai to niche waali line se 
            // iteration 1: `NULL<-1 2->3->NULL`  isme ham track khodete. agar upper nextNode me track ko save ni karte to.
            // iteration 2: `NULL<-1<-2 3->NULL`  
            // iteration 3: `NULL<-1<-2<-3`
            // is tarah se hamari List reverse hojayengi.
            currNode->next = prevNode; // Reverse the current node's pointer

            // Niche Wali line se currNode k next Ko prevNode per point karwaye baad. prevNode ko ek step aage bhejdo
            prevNode = currNode;       // Move prevNode to current node's position

            // And currNode ko bhi ek step aage bhejdo
            currNode = nextNode;       // Move to the next node in the list
        }
        // At the end of the loop, currNode will be NULL, and prevNode will be the new head
        return prevNode;
    }
};
