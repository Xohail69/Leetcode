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
    void dfs(TreeNode *root , int d ,int x ){
        if(!root ) return ; 
      
        if(d == 1 ) {
            TreeNode *new_l  = new TreeNode(x) ;
            TreeNode *new_r = new TreeNode(x) ; 
            new_l->left = root->left ; 
            new_r->right = root->right ; 
            root->left = new_l ; 
            root->right = new_r ; 
            return ; 
        }
        dfs(root->left , d-1 , x ) ; 
        dfs(root->right , d-1 , x ) ; 
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1 ){
            TreeNode *t = new TreeNode(val , root , NULL ) ; 
            return t ; 
        }
        
        dfs(root , depth-1 , val ) ; 
        return root ; 
    }
};