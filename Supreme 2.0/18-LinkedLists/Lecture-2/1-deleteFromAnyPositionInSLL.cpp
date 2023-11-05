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

    ~Node()
    {
        cout << "Destructor Called For " << this->data << endl;
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
        len++;
        temp = temp->next;
    }

    return len;
}
void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

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


// Function to delete a node at a given position
void deleteFromPosition(Node *&head, Node *&tail, int position)
{
    // If the list is empty, output a message and return
    if (head == NULL)
    {
        cout << "The list is already empty." << endl;
        return;
    }
    // If we are deleting the head (position 1)
    else if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // If after deleting the head, the list becomes empty, also update the tail to NULL
        if (head == NULL) {
            tail = NULL;
        }
        delete temp; // Free the memory of the old head
    }
    // If we are deleting the tail (last position)
    else if (position == getLength(head))
    {
        Node *prevNode = head;
        // Traverse the list to find the node just before the tail
        while (prevNode->next != tail)
        {
            prevNode = prevNode->next;
        }
        prevNode->next = NULL; // Disconnect the last node
        delete tail; // Free the memory of the old tail
        tail = prevNode; // Update the tail to the new last node
    }
    else // If we are deleting a node from somewhere in the middle
    {
        Node* prevNode = head;
        // Traverse the list to find the node just before the one we want to delete
        while(position != 2){
            prevNode = prevNode->next;
            position--;
        }
        Node* temp = prevNode->next; // The node to delete

        // Pointing prevNode -> next = prev->next->next;
        // after this line Jo prevNode next node k node ko point karenga 
        // for example : 10->20->30->40
        // is example me hame agar 20 delete karna hai to prevNode 10 hongi.
        // to jab ham prevNode k next ko prevNode k next k next ko point karwayenge. (prevNode->next = prevNode->next->next;)
        // to 10 wali node 30 wali node ko point karne lag jayengi.
        // 10->30->40 aise hojayenga.
        //      ^
            // 20
        // 20 ka next abhi bhi 30 ko point kar raha.
        prevNode->next = prevNode->next->next; // Bypass the deleted node

        // is wali line me phir ham 20 k next ko null pe point kar warahe.
        // 20 -> NULL // means ab hamne ise isolate karwadiya. matlab puri tarah se hamari list se alag kardiya. 
        temp->next = NULL;

        // Now, is waali line pe memoery delete kar warahe.
        delete temp; // Free the memory of the node being deleted
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Building the initial list
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    // Printing the initial list
    cout << "Initial list: ";
    print(head);

    // Deleting nodes from the list at various positions
    deleteFromPosition(head, tail, 3);
    cout << "List after deleting position 3: ";
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 2);
    cout << "List after deleting position 2: ";
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 1);
    cout << "List after deleting head: ";
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 1);
    cout << "List after deleting new head: ";
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 1);
    cout << "List after deleting the last node: ";
    print(head);
    cout << endl;

    cout << "Length of the list: " << getLength(head) << endl;

    return 0;
}
