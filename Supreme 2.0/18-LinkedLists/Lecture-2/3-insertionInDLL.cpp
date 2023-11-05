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
    Node *prev; // to keep track previous pointer.

    Node()
    {
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print(Node *head)
{
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

void insert(Node*&head,Node*&tail, int position, int data){

    Node* new_node = new Node(data);
    if(head == NULL){ // empty LL
        head = tail = new_node;
        head->prev = NULL;
        tail->next = NULL;
        return;
    }else if(position == 1){
        // head = new_node;
        new_node->next = head;
        head = new_node;
        
        Node* temp = head->next;
        temp->prev = head;
        return;
    }else if(position == getLength(head)+1){
        // head = new_node;
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
        
    }else{
        Node*prevNode = NULL;
        Node*currNode = head;
        while(position != 1){
            prevNode = currNode;
            currNode = currNode->next;
            position--;
        }

        new_node->next = currNode;
        new_node->prev = prevNode;

        prevNode->next = new_node;
        currNode->prev = new_node;



    }

}

int main()
{

    Node*head = NULL;
    Node*tail = NULL;
    insert(head,tail,1,40); // insert at head.
    insert(head,tail,1,30); // insert at head.
    insert(head,tail,1,10); // insert at head.
    insert(head,tail,4,50); // insert at tail.
    print(head);

    insert(head,tail,2,20);
    print(head);

    return 0;
}