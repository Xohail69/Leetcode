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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(!root ) return 0 ; 
        int ans = 0 ; 
        queue<pair<TreeNode*,int>> q ;
        q.push({root , 0 }) ;
        while( !q.empty() ){
  
            int n = q.size() ; 
            int first  = q.front().second ; 
            int last  = q.back().second ; 
            
             ans = max(ans , last - first + 1 ) ; 
            
      
            while(n--) {
                int cid = q.front().second -  first ;  //Ci=urrent index
                TreeNode *t = q.front().first ; 
                q.pop() ;
                if(t->left ) q.push({t->left , 1LL*2*cid + 1 }) ;
                if(t->right) q.push({t->right , 1LL*2*cid + 2 })  ; 
            }
          
            
        }
        return ans ; 
        
        
        
    }
};