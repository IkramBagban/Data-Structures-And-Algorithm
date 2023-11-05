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
    int len = getLength(head);
    if (head == NULL)
    {
        cout << "List Is already Empty" << endl;
    }

    if (len == 1 && position == 1)
    {
        Node *temp = head;
        head = tail = NULL;
        delete temp;
    }

    else if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }else if(position == len){
        tail = tail->prev;
        tail->next->prev = NULL;
        tail->next = NULL;
        delete tail->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Insert nodes into the list.
    insert(head, tail, 1, 50);
    insert(head, tail, 1, 40);
    insert(head, tail, 1, 30);
    insert(head, tail, 1, 20);
    insert(head, tail, 1, 10);
    print(head);

    cout << "After Deletion" << endl;
    deleteNode(head, tail, 5);
    print(head);
    deleteNode(head, tail, 4);
    print(head);
    deleteNode(head, tail, 3);
    print(head);
    deleteNode(head, tail, 2);
    print(head);
    deleteNode(head, tail, 1);
    // deleteNode(head, tail, 1);
    print(head);
    return 0;
}