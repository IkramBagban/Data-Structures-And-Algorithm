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

// 3 steps to insert a new node at the beginning (head) of the linked list:
// 1) Create a new Node with the desired value.
// 2) Make the 'next' of the new node point to the current head node,
//    which means the new node will be placed before the first element of the list.
// 3) Move the head to point to the new node, thereby updating the first position
//    to the new node.
// NOTE : Head ko pass by reference karna.
void insertAtHead(Node *&head, int value)
{
    if (head == NULL)
    {
        // Step 1: Create a new node with the given value
        Node *new_node = new Node(value);

        // Step 2: Update Head.
        head = new_node;
    }else{

    // Step 1: Create a new node with the given value
    Node *new_node = new Node(value);

    // Step 2: Set the 'next' of the new node to the current head
    // At this point, the new node is pointing to the node which was previously the first node
    new_node->next = head;

    // Step 3: Reassign the head to the new node
    // Now the head will point to the new node, making it the first node in the list
    head = new_node;
    }
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *head = first;

    first->next = second;

    // Print the list before insertion
    cout << "Initial List: " << endl;
    print(head);

    // Insert a new node with the value '200' at the head of the list
    insertAtHead(head, 200);

    // Print the list after insertion to see the change
    cout << "List after inserting at head: " << endl;
    print(head);

    return 0;
}
