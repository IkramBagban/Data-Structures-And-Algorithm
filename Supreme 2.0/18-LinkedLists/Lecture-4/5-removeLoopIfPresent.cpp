// question Link GFG : https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
class Solution
{
    public:
    
    Node* startingPointOfLoop(Node* head){
        
        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;
        
        while( fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                hasCycle = true;
                break;
            }
        }
        
        
        if(hasCycle){
            slow = head;
            
            while(slow != fast){
                slow = slow->next;  
                fast = fast->next;
            }
            
            return slow;
        }
        
        
        return NULL;
    }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        
        Node* startingPoint = startingPointOfLoop(head);
        
        if(startingPoint != NULL){
        Node* temp = startingPoint;
            
            while(temp->next != startingPoint ){
                temp = temp->next;
            }
            temp->next = NULL;
        }
        
        
    }
};