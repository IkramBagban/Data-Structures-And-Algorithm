// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void insertAtHead(ListNode *&head, ListNode *&tail, int value)
{
    ListNode *new_node = new ListNode(value);

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

void print(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << endl;
}

void createCycle(ListNode *head, ListNode *tail, int position)
{
    ListNode *temp = head;

    while (position != 1)
    {
        temp = temp->next;
        position--;
    }

    tail->next = temp;
}

ListNode *findStartingPoint(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    // bool isCycle = false;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            // isCycle = true;
            break;
        }
    }

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30); // at third position
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    print(head);

    // 10 k next pointer ko 30 wali node per point karwayenge to ek cycle loop bam jayenga.
    createCycle(head, tail, 3); // after this line. the loop has been created. if we print it. it will go infinite
    // print(head); // if we uncomment this. loop infinite time chalenga.

    // let's find starting point
    ListNode *startinPointOfCycle = findStartingPoint(head);
    cout << "Starting Point Of Cycle" << startinPointOfCycle->val << endl;

    return 0;
}