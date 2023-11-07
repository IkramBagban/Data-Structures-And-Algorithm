// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Two pointers are initialized to the head of the linked list.
        ListNode* slow = head;
        ListNode* fast = head;

        // This flag will be used to check if there's a cycle in the list.
        bool isCyclePresent = false;

        // Traverse the list with two pointers moving at different speeds.
        // fast moves two steps and slow moves one step at a time.
        while(fast != NULL && fast->next != NULL ){
            fast = fast -> next ->next;
            slow = slow->next;

            // If both pointers meet, there is a cycle in the list.
            if(slow == fast) {
                isCyclePresent = true;
                break;
            }
        }

        // Only proceed if there is a cycle detected.
        if(isCyclePresent){
            // Reset slow to the head of the list.
            slow = head;

            // Move both pointers at the same speed until they meet at the start of the cycle.
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            
            // Once they meet, the node where they meet is the start of the cycle.
            return slow;
        }

        // If there is no cycle, return NULL.
        return NULL;
    }
};
