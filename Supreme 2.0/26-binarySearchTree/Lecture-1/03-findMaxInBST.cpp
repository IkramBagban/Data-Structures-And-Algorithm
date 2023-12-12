// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
}

void createBST(Node *&root)
{
    int data;
    cout << "Enter Data : ";
    cin >> data;

    while (data != -1)
    // jab tak data k input me -1 ni aata loop chalao.
    {
        // BST me data insert karo and oose root se attach kardo.
        root = insertIntoBST(root, data);

        // and input lete raho
        cout << "Enter Data : ";
        cin >> data;
    }
}

// right most Node of BST will be max
Node *maxNodeInBST(Node *root)
{
    Node *maxNode = root;

    while (maxNode->right != NULL)
    {
        maxNode = maxNode->right;
    }

    return maxNode;
}

int main()
{

    Node *root = NULL;
    createBST(root);

    Node *maxNode = maxNodeInBST(root);

    if (maxNode == NULL)
    {
        cout << "THERE IS NO NODE IN BST" << endl;
    }
    else
    {
        cout << "max value in BST is " << maxNode->data << endl;
    }

    return 0;
}