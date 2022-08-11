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
    void helper(TreeNode *root , vector<int> &v ){
        if(!root ) return ;
        helper(root->left , v ) ; 
        v.push_back(root->val) ; 
        helper(root->right , v ) ; 
    }
    
    
    bool rec(TreeNode *root , TreeNode *min , TreeNode* max ){
        if(!root ) return 1 ; 
       
        if( (min and root->val <= min->val) or (max and root->val >= max->val) )
            return 0 ; 
        
        return rec(root->left , min , root) and rec(root->right , root , max ) ;
    }
    
    bool solve(TreeNode *root , TreeNode* &prev){
        if( !root ) return 1 ; 
        if( !solve(root->left , prev ) ) return 0  ;
        
        if(prev and prev->val >= root->val ) 
            return 0 ; 
        prev = root ; 
        return solve(root->right , prev ) ; 
        
        
    }
    
    bool isValidBST(TreeNode* root) {
        //M1 using Inorder traversal & storing it in a vec
        // vector<int> v ; 
        // helper(root , v ) ; 
        // for(int i = 0 ;  i < v.size() - 1 ;i ++ ){
        //     if(v[i] >= v[i+1] ) return 0 ;
        // } 
        // return 1 ; 
        
        
        //M2 using recursion 
        // return rec(root , NULL , NULL ) ; 
        
        
        
        //M3 using rec & using prev Pr
        TreeNode* prev = NULL ; 
        return solve(root , prev ) ; 
        
   
    }
};