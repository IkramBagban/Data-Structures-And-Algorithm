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
        cout << "In Defaul Constructor " << endl;
        this->next = NULL;
    }
    Node(int data)
    {
        cout << "In parameterized Constructor " << endl;
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node*temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << endl;
    
}

int main()
{
    // why not to use.
    // Node first(10);
    // first.next = second;  // because we created the first obj normally. we can access its property using dot(.)
    // cout << first << endl; // we print this. because it holds whole obj.

    // use dynamic allocation for node , write detail why using new keyword here. and why using like this.
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // this will print address of second OBJ.
    cout << second << endl; // we can print this because it holds memory location/address

    // head
    Node *head = first;

    // now let's point each node to next
    first->next = second;
    second->next = third; // because we dynamically allocate to the heap.

    // third is pointing to null. because ->
    cout << "Third ka data" << third->data << endl;

    // now printing LinkedList. 
    print(head);


    return 0;
}