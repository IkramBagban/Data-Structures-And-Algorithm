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

    // Default constructor initializes 'next' to ensure it doesn't have a garbage value
    Node()
    {
        cout << "In Default Constructor " << endl;
        this->next = NULL; // Explicitly setting 'next' to NULL to avoid dangling pointers
    }

    // Parameterized constructor to initialize node with data
    Node(int data)
    {
        cout << "In Parameterized Constructor " << endl;
        this->data = data;
        this->next = NULL; // Setting 'next' to NULL for good practice and safety
    }
};

// Function to print all the elements in the linked list
void print(Node *head)
{
    // We use a temporary pointer 'temp' to traverse the list.
    // This is good practice because:
    // 1. It prevents modifications to the 'head' pointer, which is our access point to the list.
    // 2. It helps in maintaining the original list structure, as any changes to 'temp' will not affect the actual list.
    // 3. It makes the function more general and reusable, as it doesn't rely on or alter any external variables.
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        cout << temp->data << "->";
        // Move 'temp' to point to the next node.
        // We need to do this so that with each step, 'temp' visits the next node.
        // If we don't move 'temp', we will keep looking at the same node and never get to the end.
        // And we will stuck in infinite loop
        temp = temp->next;
    }

    // After the loop, 'temp' will be NULL, indicating the end of the list

    cout << endl;
}

int main()
{
    // Dynamically allocating nodes on the heap
    // This is preferred here for several reasons:
    // - Objects created with 'new' have lifetimes that extend beyond the scope
    //   they are created in, allowing us to manage the list without scope restrictions.
    // - It is useful when the exact number of nodes is not known at compile-time.
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // Printing the address stored in 'second', which points to the second node
    cout << "Address of second node: " << second << endl; // this will print address. because it is a pointer to the obj

    // 'head' points to the first node in the linked list
    Node *head = first;

    // Linking nodes together by setting 'next' pointers
    first->next = second; // First node points to the second
    second->next = third; // Second node points to the third

    // Third node is already pointing to null (set in constructor), which indicates
    // the end of the linked list

    // Print the entire linked list starting from 'head'
    print(head);

    // It's good practice to delete dynamically allocated memory
    // however, for simplicity, we aren't deleting nodes here.
    // In a real-world application, you would need to delete each node to avoid memory leaks.

    return 0;
}
