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
        cout << "In Default Constructor " << endl;
        this->next = NULL; 
    }

    Node(int data)
    {
        cout << "In Parameterized Constructor " << endl;
        this->data = data;
        this->next = NULL; 
    }
};

// Function To Get Length Of Total nodes.
int getLength(Node *head) {
    // Start with a temporary pointer 'temp' to traverse the list
    // 'temp' will help us go through the list without losing the 'head'
    Node *temp = head;

    // Initialize a counter to keep track of the number of nodes
    int len = 0;

    // Loop through the list until we reach the end (NULL)
    while (temp != NULL) {
        len++; // Increment the counter for each node we visit
        temp = temp->next; // Move to the next node in the list
    }

    // Once the loop finishes, 'len' contains the total number of nodes
    return len;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;

    first->next = second;
    second->next = third;

    // Get the length of the linked list by passing the 'head' pointer
    int lengthOfLinkedList = getLength(head);
    cout << "length Of LinkedList : " << lengthOfLinkedList << endl;

    return 0;
}
