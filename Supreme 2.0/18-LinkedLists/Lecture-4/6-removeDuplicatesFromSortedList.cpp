class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

    ListNode* temp = head;

    while(temp != NULL && temp->next != NULL){
        if(temp->val == temp->next->val){
            ListNode* dltNode = temp->next;
            temp->next = temp->next->next;
            delete dltNode;
        }else{
            temp = temp->next;
        }
    }
    return head;    
    }
};