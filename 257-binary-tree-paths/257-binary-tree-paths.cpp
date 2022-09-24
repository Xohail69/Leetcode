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
    vector<string>ans ; 
    void dfs(TreeNode* root , string &s){
           if(!root ) return ; 
        string t = s; 
        t += to_string(root->val) ; 
        t += "->" ; 
        if(!root->left and !root->right ) {
            t.pop_back() ; 
            t.pop_back() ;
            ans.push_back(t) ;
            return ;
            
        }
        else{
        dfs(root->left , t ) ; 
         dfs(root->right , t ) ;
        }
      
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string t ; 
        dfs(root , t ) ; 
        return ans ; 
    }
};