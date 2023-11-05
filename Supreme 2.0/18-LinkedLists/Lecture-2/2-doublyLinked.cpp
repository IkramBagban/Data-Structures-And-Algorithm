// doubly linkedlist : 
// A doubly linked list (DLL) is a special type of linked list in which each node contains a pointer to the previous node as well as the next node of the linked list.
// In doubly linkedlist every node has two pointers next and prev. next pointer point to next node. and prev pointer point to previous node. 

// Node of a doubly linked list
class Node {
public:
    int data;
   
    // Pointer to next node in DLL
    Node* next;
   
    // Pointer to previous node in DLL
    Node* prev;
};


// **Advantages of Doubly Linked List over the singly linked list:
// A DLL can be traversed in both forward and backward directions. 
// The delete operation in DLL is more efficient if a pointer to the node to be deleted is given. 
// We can quickly insert a new node before a given node. 
// In a singly linked list, to delete a node, a pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer. 

// **Disadvantages of Doubly Linked List over the singly linked list:
// Every node of DLL Requires extra space for a previous pointer. It is possible to implement DLL with a single pointer though (See this and this). 
// All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with the next pointers. For example in the following functions for insertions at different positions, we need 1 or 2 extra steps to set the previous pointer.

// **Applications of Doubly Linked List:
// It is used by web browsers for backward and forward navigation of web pages 
// LRU ( Least Recently Used ) / MRU ( Most Recently Used ) Cache are constructed using Doubly Linked Lists. 
// Used by various applications to maintain undo and redo functionalities. 
// In Operating Systems, a doubly linked list is maintained by thread scheduler to keep track of processes that are being executed at that time.