// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link : https://leetcode.com/problems/linked-list-cycle/description/


// Approach 1: Hash Map
// Note: This is not the most efficient code in terms of space complexity.
// An interviewer will likely prefer a more space-efficient approach, such as Floyd's Cycle Detection Algorithm.
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Create a map to store the visit status of each node, default is false.
        map<ListNode*, bool> visitedNodes;

        // Start iterating from the head of the list.
        ListNode* temp = head;

        // Loop until we reach the end of the list.
        while(temp != NULL){
            // Check if the current node has been visited before.
            if(visitedNodes[temp] == false){
                // Mark the current node as visited.
                visitedNodes[temp] = true;
                // Move to the next node in the list.
                temp = temp->next;
            } else {
                // If the current node was visited already, we found a cycle.
                return true;
            }
        }
        // If we exit the loop normally, there is no cycle.
        return false;
    }
};


// Approach 2: Floyd's Cycle Detection Algorithm (Tortoise and Hare)
// Most Optimized Approach. The space complexity of this approach is O(1).
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Initialize two pointers, slow (the tortoise) and fast (the hare).
        ListNode* slow = head;
        ListNode* fast = head;

        /* ``````````````````````````````````````````````
        Important Note : if cycle present hai. 
        to fast and slow ka distance 1 step kam hota rahenga.
        aur ek time aisa aayenga jab wo dono same node per point kar rahe hai.
        ``````````````````````````````````````````````*/

        // Loop until fast pointer reaches the end of the list
        while(fast != NULL && fast->next != NULL){ 
            // Move the fast pointer two steps ahead
            fast = fast->next->next;
            // Move the slow pointer one step ahead
            slow = slow->next;

            // If the fast pointer and the slow pointer meet, a cycle exists
            if(fast == slow){
                return true;
            }
        }

        // If the fast pointer reaches the end of the list, no cycle exists
        return false;
    }
};
