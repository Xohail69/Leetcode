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
 
    
    
    vector<vector<int>> ans ; 
    void dfs(TreeNode *root , vector<int> &v , int target  ){
        if( !root ) return ; 
        
        
        v.push_back(root->val) ; 
        target -= root->val ; 
        
        if(!root->left and !root->right ){
            if(target == 0 )
            ans.push_back(v) ; 
        
        }
        else{       
         dfs(root->left , v , target ) ;
        dfs(root->right , v , target ) ; 
        }
         v.pop_back() ; 
        
        
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int target  ) {

        vector<int> v ; 
        dfs(root , v , target  ) ; 
        return ans ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};