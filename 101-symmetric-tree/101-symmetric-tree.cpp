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
    bool mirror(TreeNode *p , TreeNode *q ){
        if( !p and !q  ) return 1 ; 
        if( !p or !q or p->val != q->val ) return 0 ; 
        return mirror(p->left , q->right ) and mirror(p->right , q->left ) ; 
        
         
        
        
        
        
    }
    bool isSymmetric(TreeNode* root) {
        return mirror(root->left , root->right ) ; 
    }
};