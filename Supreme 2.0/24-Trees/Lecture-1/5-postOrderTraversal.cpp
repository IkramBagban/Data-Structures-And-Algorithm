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

Node *buildTree()
{

    int data;
    cout << "Enter Data" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // step 1 : create Node
    Node *root = new Node(data);

    cout << "Enter data for left part of " << data << endl;
    root->left = buildTree();

    // step 3 : create right child
    cout << "Enter data for right part of " << data << endl;
    root->right = buildTree();

    return root;
}

// post Order traversal : LRN
void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    
    // step 1 (L): Node k left child pe jao
    postOrder(root->left);

    // step 2 (R): Node k right child pe jao.
    postOrder(root->right);

    // step 3 (N): print current Node
    cout << root->data << " " ;

}

int main()
{

    Node* root = NULL;
    root = buildTree();
    // Input : 10 20 40 -1 -1 30 50 -1 -1 60 -1 -1 -1
    // Output :40, 50, 60, 30, 20, 10
    postOrder(root);

    return 0;
}