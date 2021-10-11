/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        
        if(!root) return 0;
        
        return 1+max(height(root->left),height(root->right));
        
    }
    
    int diameter(TreeNode* root){
        if(!root) return 0;
        
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        
        int leftdiameter = diameter(root->left);
        int rightdiameter = diameter(root->right);
        
        return max(max(leftdiameter,rightdiameter),1+leftheight+rightheight);
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
     
        return diameter(root)-1;
        
    }
};
