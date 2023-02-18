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
  

       void dfs(TreeNode *&l , TreeNode *&r ){
        if( !l or !r ) {
          swap(l , r ) ;
            if(l) dfs(l->left , l->right ) ; 
            if(r) dfs(r->left , r->right ) ; 
            return ; 
           
        }
         swap(l->val , r->val ) ; 
        dfs(l->left , r->right ) ;
        dfs(l->right , r->left ) ;
                          
    }
    TreeNode* invertTree(TreeNode* root) {
         if(!root ) return root ;  
        dfs(root->left , root->right  ) ; 
        return root ; 
    }
};