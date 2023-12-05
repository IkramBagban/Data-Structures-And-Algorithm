// Question Link : https://leetcode.com/problems/diameter-of-binary-tree/

// this isn't a good approach to solve this question. 
class Solution {
public:
    // Function to calculate the height of a binary tree
    int height(TreeNode* root) {
        // Base case: If the root is null, the height is 0
        if(root == NULL){
            return 0;
        }

        // Recursively find the height of the left and right subtrees
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // The height of the current node is the max of leftHeight and rightHeight plus 1
        return max(leftHeight, rightHeight) + 1;
    }

    // Function to calculate the diameter of a binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        // Base case: If the root is null, the diameter is 0
        if(root == NULL){
            return 0;
        }

        // Option 1: Diameter of the left subtree
        int option1 = diameterOfBinaryTree(root->left);
        // Option 2: Diameter of the right subtree
        int option2 = diameterOfBinaryTree(root->right);
        // Option 3: Diameter through the current node
        int option3 = height(root->left) + height(root->right);

        // The diameter is the maximum of the three options
        return max(option1, max(option2, option3));
    }
};
