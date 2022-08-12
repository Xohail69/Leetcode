/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(TreeNode *root , int min , int max ){
//         if(!root ) return NULL ; 
//         if(root == p or root == q ) return root ; 
//         auto left = helper(root->left , p , q )  ;
//         auto right = helper(root->right , p , q ) ;
   
//          return left and right ? root : left ? left : right ; 
        if(!root ) return root ; 
        int node = root->val  ; 
        if( min <= node and node <= max   ) return root ; 
        if( node < min  ) return helper(root->right , min , max ) ; 
        if(node > max ) return helper(root->left , min , max ) ; 
        return NULL ;
         
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int maxi = max(p->val , q->val ) ; 
        int mini = min(p->val , q->val ) ; 
        return helper(root , mini , maxi  ) ; 
        
        
        
        
        
    }
};