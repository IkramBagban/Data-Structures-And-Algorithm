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

    // step 2 : create Left Child
    root->left = buildTree();

    // step 3 : create right child
    root->right = buildTree();

    return root;
}

// pre Order traversal : NLR
void preOrderTraversal(Node* root){

    if(root == NULL){
        return;
    }

    // step 1 : print current Node
    cout << root->data << " " ;

    // step 2 : Node k left child pe jao
    preOrderTraversal(root->left);

    // step 3 : Node k right child pe jao.
    preOrderTraversal(root->right);
}

int main()
{

    Node* root = NULL;
    root = buildTree();
    // Input : 10 20 40 -1 -1 30 50 -1 -1 60 -1 -1
    // Output : 10 20 40 30 50 60
    preOrderTraversal(root);

    return 0;
}