// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node* root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp-> data << " ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

        }
    }
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

    Node *root = NULL;
    createBST(root);

    cout << "Level Order Traversal" << endl;
    levelOrderTraversal(root); // in inorder traversal you'll get sorted data.
    cout << endl;

    cout << "in Order Traversal" << endl;
    inOrderTraversal(root);
    cout << endl;

    cout << "post Order Traversal" << endl;
    postOrder(root);
    cout << endl;

    cout << "in Order Traversal" << endl;
    preOrderTraversal(root);
    cout << endl;

    return 0;
}