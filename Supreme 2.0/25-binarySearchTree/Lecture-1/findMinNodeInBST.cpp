// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int data)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        cout << "In base" << endl;
        root = new Node(data);
        return root;
    }

    if (data < root->data) // agar data root k data se chota hai to root k left me insert karo.
    {
        root->left = insertIntoBST(root->left, data);
    }
    else // agar data root k data se bada ya equal hoto root k right me insert karo.
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void createBST(Node *&root)
{
    int data;
    cout << "Enter Data: " << endl;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter Data: " << endl;
        cin >> data;
    }
}

// In BST, left most will be minimum
Node *minNodeInBST(Node *root)
{
    Node *minNode = root;

    while (minNode->left != NULL) // BST k left most me jao.
    {
        minNode = minNode->left;
    }

    return minNode; // and min node return kardo.
}

int main()
{
    Node *root = NULL;
    createBST(root);

    Node *minNode = minNodeInBST(root);
    if (minNode == NULL)
    {
        cout << "There Is No Node In BST" << endl;
        ;
    }
    else
    {
        cout << "min value in BST is " << minNode->data << endl;
    }
    return 0;
}