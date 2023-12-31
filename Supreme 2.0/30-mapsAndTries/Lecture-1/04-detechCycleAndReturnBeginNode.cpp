// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/linked-list-cycle-ii/description/


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> mapping;
        ListNode* temp = head;
        while(temp != NULL){
            if(mapping.find(temp) != mapping.end()){
                return temp;
            }else{
                mapping[temp] = false;
                temp = temp->next;
            }
        }

        return NULL;
    }
};