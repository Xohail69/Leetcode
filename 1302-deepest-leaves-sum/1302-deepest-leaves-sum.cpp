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
    int deepestLeavesSum(TreeNode* root) {
        
          if( !root ) return 0 ;
        queue<TreeNode*> q ;
        q.push(root) ;
        int depth = 0 ;
        while( !q.empty() ){
            int n = q.size() ;
            depth++ ;
            while(n--){
                TreeNode *t = q.front() ;
                q.pop() ;
                if(t->left) q.push(t->left) ;
                if(t->right) q.push(t->right) ;
            }
        }
        int ans = 0 , d = 0 ;
         q.push(root) ;
        while( !q.empty() ){
            int n = q.size() ;
            d++ ;
            
            while(n--){
                TreeNode *t = q.front() ;
                if(d == depth ) ans += t->val ;
                q.pop() ;
                if(t->left) q.push(t->left) ;
                if(t->right) q.push(t->right) ;
            }
        }
        
        
        
        
        return ans ;
    }
};