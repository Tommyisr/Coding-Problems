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
    
    TreeNode* rectree(TreeNode* root1, TreeNode* root2, TreeNode* newnode){
        if(!root1 && !root2) return NULL;
        
        newnode = new TreeNode();
        if(root1) newnode->val += root1->val;
        if(root2) newnode->val += root2->val;
        
        if(root1 && root2){
            newnode->left = rectree(root1->left,root2->left, newnode);
            newnode->right = rectree(root1->right,root2->right, newnode);

        }
        else if(root1) {
            newnode->left = rectree(root1->left,NULL, newnode);
            newnode->right = rectree(root1->right,NULL, newnode);
        }
        else{
            newnode->left = rectree(NULL,root2->left, newnode);
            newnode->right = rectree(NULL,root2->right, newnode);
        }
        
        
        return newnode;
        
    }
    
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        TreeNode* res = NULL;
        res = rectree(root1, root2,res);
        
        return res;
        
    }
};
