// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question : https://leetcode.com/problems/search-in-a-binary-search-tree/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // If the root is NULL, the tree is empty or we've reached the end of a branch.
        if(root == NULL){
            return NULL;
        }
        
        // If the current node's value matches the search value, return the current node.
        if(root->val == val){
            return root;
        }

        // If the search value is greater than the current node's value, 
        // search in the right subtree.
        if(root->val < val){
           return searchBST(root->right, val);
        } else {
            // If the search value is less than the current node's value, 
            // search in the left subtree.
           return searchBST(root->left, val);
        }  
    }
};
