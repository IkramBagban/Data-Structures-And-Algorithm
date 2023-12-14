// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        if(root == NULL){
            return NULL;
        }
        
        if(root->val == val){
            return root;
        }

        if(root->val < val){
           return root->right = searchBST(root->right, val);
        }else{
           return root->left = searchBST(root->left, val);
        }  
    }
};