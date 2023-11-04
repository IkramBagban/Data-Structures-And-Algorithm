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

    if (head == NULL) // If the list is empty
    {
        head = tail = new_node; // The new node becomes both head and tail.
    }
    else // If the list is not empty
    {
        // tail k next ko new_node per point karwado. isse new_node last pe aajayenga.
        tail->next = new_node; 
        // and phir tail abhi second last pe honga. to tail = new_node kardo. kyu k new node last pe hai to tail bhi last position pe chala jayenga.
        tail = new_node;
    }
}

int main()
{
    // Always Initialize head and tail with NULL instead of just declaring.
    Node *head = NULL; 
    Node *tail = NULL;

    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    // Print the list before insertion at tail
    cout << "List after inserting at head: " << endl;
    print(head);

    insertAtTail(head, tail, 500);
    insertAtTail(head, tail, 600);

    // Print the list after insertion at tail
    cout << "List after inserting at tail: " << endl;
    print(head);

    return 0;
}
