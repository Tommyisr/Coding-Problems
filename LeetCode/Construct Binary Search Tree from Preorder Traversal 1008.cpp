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
    TreeNode* rec(vector<int>& array, int* index, int max){
        
        
        
        
        if(*index == array.size() || array[*index] > max) return NULL;
        
        TreeNode* t = new TreeNode(array[*index]);
        
        (*index)++;
        t->left = rec(array,index,t->val);
        t->right = rec(array,index,max);
        
        
        return t;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        
        int index = 0;
        return rec(preorder,&index, INT_MAX);;
        
    }
};
