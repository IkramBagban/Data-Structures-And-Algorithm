class Solution {
public:
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

        ListNode* head2 = getMiddle(head);
        ListNode* midTolastReverse = reverseLL(head2->next);

        head2 = midTolastReverse;

        while(head2 != NULL){
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