// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev; // Pointer to the previous node in the list.

    Node()
    {
        this->next = NULL;
        this->prev = NULL;
    }

    // Constructor with data initializes node with a given value and pointers to NULL.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is Empty";
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    Node *temp = head;

    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// Function to insert a new node into the linked list at a specified position.
void insert(Node *&head, Node *&tail, int position, int data)
{
    Node *new_node = new Node(data); // Create a new node with the given data.

    // Check if the given position is valid.
    if (position > getLength(head) + 1 || position < 1)
    {
        cout << "Please Give Valid position to insert";
        return; // Return if the position is invalid.
    }

    // If the list is currently empty.
    if (head == NULL)
    {
        head = tail = new_node; // New node becomes both head and tail.
    }
    else if (position == 1)
    {                          // Insertion at the head of the list.
        new_node->next = head; // Point new node to the current head.
        head->prev = new_node; // Update current head's prev to new node.
        head = new_node;       // New node becomes the new head.
    }
    else if (position == getLength(head) + 1)
    {                          // Insertion at the tail of the list.
        tail->next = new_node; // Current tail points to new node.
        new_node->prev = tail; // New node's prev points to current tail.
        tail = new_node;       // New node becomes the new tail.
    }
    else
    {                          // Insertion at a position in the middle of the list.
        Node *prevNode = NULL; // Pointer to track the previous node.
        Node *currNode = head; // Pointer to track the current node.

        // Traverse the list until the correct position is reached.
        while (position != 1)
        {
            prevNode = currNode;
            currNode = currNode->next;
            position--;
        }

        // Insert the new node between prevNode and currNode.
        new_node->next = currNode;
        new_node->prev = prevNode;
        prevNode->next = new_node;
        currNode->prev = new_node;
    }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    // Check if the list is empty.
    if (head == NULL)
    {
        cout << "List Is already Empty" << endl;
        return;
    }

    // ***Special case if the list has only one node.***
    if (head == tail && position == 1)
    {
        delete head;        // Delete the only node.
        head = tail = NULL; // Reset head and tail to NULL.
    }
    // Deletion of the first node.
    else if (position == 1)
    {
        Node *temp = head;
        head = head->next; // Move head to the next node.
        head->prev = NULL; // Update the new head's prev pointer.
        delete temp;       // Delete the old head.
    }
    // Deletion of the last node.
    else if (position == getLength(head))
    {
        Node *temp = tail;
        tail = tail->prev; // Move tail back.
        tail->next = NULL; // Update the new tail's next pointer.
        delete temp;       // Delete the old tail.
    }
    // Deletion from the middle.
    else
    {
        Node *currNode = head;
        while (position > 1)
        { // Find the node at the given position.
            currNode = currNode->next;
            position--;
        }

        currNode->prev->next = currNode->next; // Bridge the previous node's next to current's next.
        currNode->next->prev = currNode->prev; // Bridge the next node's prev to current's prev.

        // Before deletion:
        // ... <--> [prevNode] <--> [currNode] <--> [nextNode] <--> ...

        // After the operation:
        // ... <--> [prevNode] <--> [nextNode] <--> ...

        // And currNode is now disconnected:
        // [prevNode] <--> [nextNode]
        //    [currNode]  (ready to be deleted)

        delete currNode; // Delete the current node.
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert(head, tail, 1, 50);
    insert(head, tail, 1, 40);
    insert(head, tail, 1, 30);
    insert(head, tail, 1, 20);
    insert(head, tail, 1, 10);
    print(head);

    cout << "After Deletion" << endl;
    deleteNode(head, tail, 5); // delete from tail
    deleteNode(head, tail, 1); // delete from head
    deleteNode(head, tail, 2); // delete from middle

    print(head);
    return 0;
}