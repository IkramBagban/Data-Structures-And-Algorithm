// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void insertAtHead(ListNode *&head, ListNode *&tail, int value)
{
    ListNode *new_node = new ListNode(value);

    if (head == NULL)
    {
        head = tail = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void print(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Function to create a cycle in the linked list.
// The cycle is created by connecting the tail to a node at the given position.
void createCycle(ListNode *head, ListNode *tail, int position)
{
    ListNode *temp = head;

    // Traverse the list until we reach the specified position
    while (position != 1)
    {
        temp = temp->next;
        position--;
    }

    // Connect the tail's next pointer to the node at the specified position
    tail->next = temp;
}

ListNode *findStartingPoint(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        // Check if both pointers meet at the same node
        if (slow == fast)
        {
            break; // A cycle has been detected
        }
    }

    // Reset the slow pointer to the head for the next phase
    slow = head;

    // Loop to find the starting point of the cycle
    while (slow != fast)
    {
        // Move both pointers at the same pace
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}

void removeCycle(ListNode *head, ListNode *startingPointOfCycle)
{
    ListNode *temp = head;

    while (temp != startingPointOfCycle->next)
    {
        temp->next = NULL;
    }
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30); // This node will be at the third position
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    print(head);

    // Create a cycle in the list. The tail node will point to the node at position 3
    createCycle(head, tail, 3); // After this line, a loop (cycle) is created.

    // Find the starting point of the cycle in the linked list
    ListNode *startingPointOfCycle = findStartingPoint(head);

    // remove cycle
    removeCycle(head, startingPointOfCycle);

    // Print function is commented out to avoid infinite loop due to the cycle
    print(head); // WARNING: This will cause an infinite loop!

    cout << "Starting Point Of Cycle: " << startingPointOfCycle->val << endl;

    return 0;
}
