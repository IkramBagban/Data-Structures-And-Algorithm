// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/palindrome-linked-list/description/
class Solution {
public:
    // This Code Will Give Us Middle of the LL
    // if 1,2,3,4,5,6 even LL hongi to
    // mid 3 honga. is code k according.
    ListNode* getMiddle(ListNode *head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* reverseLL(ListNode* head){
        ListNode* prevNode = NULL;
        ListNode* currNode = head;

         while(currNode != NULL){
            ListNode* nextNode = currNode->next;
            currNode->next = prevNode; 
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;

    }
    bool isPalindrome(ListNode* head) {

        // [1,2,2,1]

        // get mid
        ListNode* head2 = getMiddle(head);

        // [1,2] // first half
        // reverse second half
        // [2,1] second half before reverse
        head2 = reverseLL(head2->next); 
        // [1,2] second half after reverse
        
        while(head2 != NULL){
            // Compare first half and second reversed half.
            if(head->val == head2->val){
                head = head->next;
                head2=head2->next;
            }else{
                return false;
            }        
        }
        return true;   
    }
};

/* 
Approach 2: Brute force.
1 : reverse Whole LL.
2 : compare original and reversed List.

But isme ham ek aur linkedlist bana rahe reverse k lia. to Space complexity O(N) hojayengi.
aur optimal wale me space O(1).

TC = O(N) + O(N) = O(N)
SC = (N) // extra list
    
*/