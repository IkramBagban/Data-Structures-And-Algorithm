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
    Node(int data) : data(data), left(NULL), right(NULL) {}
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

void createBST(Node *&root)
{
    cout << "Enter Data" << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter Data" << endl;
        cin >> data;
    }
}

int main()
{

    Node* root = NULL;
    createBST(root);


    return 0;
}