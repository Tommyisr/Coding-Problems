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
        if(root->left && root->right){
            if((root->left->val == x && root->right->val == y) || (root->left->val == y && root->right->val == x)) return false;
        }
        array.insert({root->val,dep});
        dep++;
        int left = depth(root->left,dep,x,y);
        int right = depth(root->right,dep,x,y);
        return left && right;
        
        
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        // depth(root,0,x,y);
        // depth(root,y,0);
        
        if(depth(root,0,x,y) && array[x] == array[y]) return true;
        return false;
        
    }
};
