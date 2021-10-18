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
    map<int,int> array;
    
    bool depth(TreeNode* root, int dep, int x, int y){
        
        if(!root) return true;
        else if(root->left && root->right){
            if((root->left->val == x && root->right->val == y) || (root->left->val == y && root->right->val == x)) return false;
        }
        
        array.insert({root->val,dep});
    
        
        int left = depth(root->left,dep+1,x,y);
        int right = depth(root->right,dep+1,x,y);
        
        return left && right;
        
        
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        
        if(depth(root,0,x,y) && array[x] == array[y]) return true;
        return false;
        
    }
};
