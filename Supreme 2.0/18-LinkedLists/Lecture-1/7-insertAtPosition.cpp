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

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
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
        len++;             // Increment the counter for each node we visit
        temp = temp->next; // Move to the next node in the list
    }

    return len;
}
void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = tail = new_node; // For an empty list, the new node is both head and tail.
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // If the position is 1, use the insertAtHead function
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return; // Return after insertion to avoid further processing
    }
    // If the position is beyond the current length, use the insertAtTail function
    else if (position == getLength(head) + 1)
    {
        insertAtTail(head, tail, data);
        return; // Return after insertion to avoid further processing
    }
    // else
    // {
    //     // If the position is in the middle, perform the insertion here
    //     // Step 1: Create a new node with the given data
    //     Node *new_node = new Node(data);
    //     // Initialize prevNode to NULL, it will be used to traverse the list
    //     Node *prevNode = NULL;
    //     // Start with currNode at the head of the list
    //     Node *currNode = head;

    //     // Traverse the list until the desired position is reached
    //     while(position != 1){
    //         prevNode = currNode; // Keep track of the previous node
    //         currNode = currNode->next; // Move to the next node
    //         position--; 
    //     }

    //     // Link the new node between prevNode and currNode
    //     prevNode->next = new_node; // prevNode will point at new Node. means it is connected with prev node.
    //     new_node->next = currNode; // here we are pointing newNode to currNode.
    //     // prevNode -> new_node -> currNode
    //     // is taraf se ham given position pe new_node add kar rahe.
    // }

    // here we use only prevNode to insert at given position.   
    // else
    // {
    //     // Step 1: Create a new node with the given data
    //     Node *new_node = new Node(data);
    //     // Start with prevNode at the head of the list
    //     Node *prevNode = head;

    //     // Move prevNode to the node just before the position
    //     // The position is decremented until it reaches 2 because
    //     // we want prevNode to point to the node after which we have to insert the new node.
    //     // Position 2 means prevNode will be the first node because the list is 1-indexed.
    //     while(position > 2){
    //         prevNode = prevNode->next;
    //         position--;
    //     }

    //     // Insert the new node into the list
    //     new_node->next = prevNode->next;
    //     prevNode->next = new_node;

    // }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Building the initial list
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 500);
    insertAtTail(head, tail, 600);

    // Printing the initial list
    cout << "Initial List: " << endl;
    print(head);

    // Inserting at specific positions
    insertAtPosition(head, tail, 6, 1000); // Position 4 assumes a 1-indexed list

    // Printing the list after insertion at specific positions
    cout << "List after insertion at specific positions: " << endl;
    print(head);

    return 0;
}
