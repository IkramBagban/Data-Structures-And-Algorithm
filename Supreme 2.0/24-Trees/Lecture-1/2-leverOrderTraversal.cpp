#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

main()
{

    Node *root = NULL;
    // test case 1;
    // 10 20 40 -1 -1 30 50 -1 -1 60 -1 -1 -1
    // tree structure
    //     10      // level 0
    //    /
    //   20        // level 1
    //  /  \
    // 40   30     // level 2
    //     /  \
    //    50   60  // level 3
    
    // OUTPUT :
    // 10
    // 20
    // 40 30
    // 50 60

    // test case 2
    // 1 2 4 -1 -1 5 8 -1 -1 9 -1 -1 3 6 -1 -1 7 -1 -1
    // tree structure 
    //     1
    //    /  \
    //   2    3
    //  / \  / \
    // 4  5  6  7
    //   / \
    //  8   9

    // OUTPUT :
    // 1
    // 2 3
    // 4 5 6 7
    // 8 9
    root = buildTree();
    levelOrderTraversal(root);

    return 0;
}