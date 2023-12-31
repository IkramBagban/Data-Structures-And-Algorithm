// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/linked-list-cycle/


class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool>mapping;

        while(head != NULL){
            if(mapping.find(head) != mapping.end()){
                return true;
            }else{
                mapping[head] = false;
                head = head -> next;
            }
        }
        return false;
        
    }
};