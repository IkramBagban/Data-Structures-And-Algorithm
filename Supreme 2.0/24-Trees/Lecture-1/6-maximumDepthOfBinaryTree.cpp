// Question Linkk : https://leetcode.com/problems/maximum-depth-of-binary-tree/


// used GPT for comments
/*
Approach
Base Case: If the current node (root) is NULL, it means we've reached the end of a branch. So, return 0 as there's no depth to measure.

Recursive Calls:
Recursively call maxDepth for the left child of the current node and store the result in leftHeight.
Do the same for the right child and store the result in rightHeight.

Calculate and Return Height:
The height of the current node is determined by the maximum of leftHeight and rightHeight, plus 1 (to account for the current node).

Return Value: The function returns this calculated height.

*/
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        // Base case: if the current node is NULL, return 0
        if (root == NULL)
        {
            return 0;
        }

        // Recursive call for the left subtree
        int leftHeight = maxDepth(root->left);
        // Recursive call for the right subtree
        int rightHeight = maxDepth(root->right);

        // Calculate the height by taking the maximum of left and right subtree heights
        // and adding 1 for the current node
        int height = max(leftHeight, rightHeight) + 1;

        return height;
    }
};

/*

    1
   / \
  2   3
 / \
4   5


First Call: maxDepth(1)
Left Subtree: maxDepth(2)
Left Subtree: maxDepth(4) returns 1
Right Subtree: maxDepth(5) returns 1
Height Calculation: max(1, 1) + 1 = 2
Right Subtree: maxDepth(3) returns 1
Height Calculation: max(2, 1) + 1 = 3
Final Result: The function returns 3, which is the maximum depth of the tree.

*/

/*
Explaining Recursive Calls
maxDepth(1) is called. Since node 1 is not NULL, it proceeds to call maxDepth on its children.

For node 2, similar calls occur for nodes 4 and 5. Both are leaves and return a height of 1.

Back at node 2, the maximum of 1 (from both children) plus 1 (for itself) makes its height 2.

For node 3, as it's a leaf, it returns 1.

Finally, back at node 1, the maximum of heights from nodes 2 and 3 (2 and 1) plus 1 (for node 1 itself) gives the maximum depth of the tree as 3.
*/