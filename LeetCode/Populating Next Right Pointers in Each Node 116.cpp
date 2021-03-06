/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void rec(Node* root, Node* rnex){
        if(!root) return;
        
        root->next = rnex;
        rec(root->left, root->right);
        
        if(rnex) rec(root->right,rnex->left);
        else rec(root->right,NULL);
        
    }
    
    
    Node* connect(Node* root) {
        if(!root) return NULL;
        
        rec(root, NULL);
        
        return root;
    }
};
