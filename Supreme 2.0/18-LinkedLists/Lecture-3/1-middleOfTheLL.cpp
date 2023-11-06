// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link :- https://leetcode.com/problems/middle-of-the-linked-list/

// There is also another solution of this question - Iterative Solution.
// in That solution we need to get length of the list. and then devide it by two.
// uske baad ek aur loop chalau usko half tak chalao aur last wala Node print kardo.
// but isme 2 loop lag rahe. aur tortoiz me single loop me effecient way me ham mid nikal sakte.
// Tortoise and Hare algorithm is better to find midle in linked list.

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Tortoise and Hare algorithm Explanation: This algorithm uses two pointers which we'll call slow and fast.
        // The slow pointer moves one node at a time, while the fast pointer moves two nodes at a time.
        // When the fast pointer reaches the end of the list, the slow pointer will be at the midpoint.
        
        // Define slow pointer, which will eventually point to the middle of the list
        ListNode* slow = head; // slow is initialized to head, and will move one step at a time
        
        // Define fast pointer, which is used to determine the end of the list
        ListNode* fast = head; // fast is also initialized to head, but will move two steps at a time

        // Loop condition: The loop continues until the fast pointer reaches the end of the list.
        // If there is an even number of nodes, fast will be on NULL. If odd, fast->next will be NULL.
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next; // Move fast pointer two steps ahead
            slow = slow->next;       // Move slow pointer one step ahead
        }

        // At the end of the loop, slow will be pointing to the middle node of the list.
        // Return the slow pointer, which now points to the middle node
        return slow;
    }
};
