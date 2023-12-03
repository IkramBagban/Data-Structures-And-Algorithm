#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    // pointer for left child
    Node *left;
    // pointer for right child
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree()
{

    int data;
    cout << "Enter the data" << endl;
    cin >> data;

    // base case. -1 data me aaya to us child ko NULL mark kardo.
    if (data == -1)
    {
        return NULL;
    }

    // Step 1 : create root node
    Node *root = new Node(data);

    // step 2 : create left child
    cout << "Enter data for left part of " << data << endl;
    root->left = buildTree();

    // step 3 : create right child
    cout << "Enter data for right part of " << data << endl;
    root->right = buildTree();

    return root;
}

// LNR => left, current Node, right
void inOrderTraversal(Node *root)
{

    Node *temp = root;

    // base case. -1 data me aaya to return kardo.
    if (temp == NULL)
    {
        return;
    }

    // Step 1 : jab tak null na mile left jao.
    inOrderTraversal(temp->left);

    // step 2 : data print karo.
    cout <<  temp->data << " ";

    // step 3 : right jao.
    inOrderTraversal(temp->right);

}

main()
{

    Node *root = NULL;
    // Input;
    // 10 20 40 -1 -1 30 50 -1 -1 60 -1 -1 -1
    // tree structure
    //     10
    //    /
    //   20
    //  /  \
    // 40   30
    //     /  \
    //    50   60

    // OUTPUT SHOULD BE : 
    // 40 20 50 30 60 10
    root = buildTree();
    inOrderTraversal(root);
    return 0;
}