// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question : https://leetcode.com/problems/delete-node-in-a-bst/

// approach :
// step 1 : search target
// step 2 : check its cases and delete as per case
/*{
    // case 1 : if target has no child than delete it directly and return NULL

    // case 2 : if target has one child then{
        // step 1 : Save the non-null child node in a temporary node.
        // step 2 : delete root Node
        // step 3 : return the saved temporrary node
    }

    // case 3 : if target have both child then
    {
        // step 1 : findMin of target's right subtree
        // step 2 : replace target's node with the min value of right subtree
        // step 3 : delete the node with the min value of right sub tree which we've found.
        // step 4 : Return the root of the modified tree.
    }

}*/

class Solution
{
public:
    TreeNode *findMin(TreeNode *root)
    {

        while (root->left != NULL)
        {
            root = root->left;
        }

        return root;
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        // if root == NULL
        if (root == NULL)
        {
            return NULL;
        }

        // target mil gaya
        if (root->val == key)
        {
            // case 1 : currNode ke left and right dono NULL hai
            // (currNode have no childs)
            if (root->right == NULL && root->left == NULL)
            {
                // delete Node
                delete root;
                return NULL;
            }

            // case 2 : currNode ka right NULL hai and left non NULL hai.
            // (currNode has oonly left child)
            else if (root->right == NULL && root->left != NULL)
            {
                TreeNode *childSubtree = root->left;
                delete root;
                return childSubtree;
            }

            // case 3 : currNode ka left NULL hai and right non NULL hai
            // (currNode has only right child)
            else if (root->right != NULL && root->left == NULL)
            {
                TreeNode *childSubtree = root->right;
                delete root;
                return childSubtree;
            }

            // case 4 : currNode ka right and left dono non NULL hai
            // (currNode have both right and left child)
            else
            {
                // step 1 : find Minimum of right sub tree.
                TreeNode *rightMin = findMin(root->right);

                // // Wrong! **step 2 : replace minimum Node of right sub tree with currNode**
                // pehle mai currNode ko right sub tree k minNode se replace kar raha tha.
                // but hame Node ni sirf value replace karna hai.
                // // Corrected **step 2 : replace minimum value of right sub tree with currNode value.
                root->val = rightMin->val;

                // step 3 : delete that minimum Node of right sub tree
                root->right = deleteNode(root->right, rightMin->val);

                // return root;
                return root;
            }
        }

        // // search in BST
        if (root->val < key)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            root->left = deleteNode(root->left, key);
        }

        return root;
    }
};