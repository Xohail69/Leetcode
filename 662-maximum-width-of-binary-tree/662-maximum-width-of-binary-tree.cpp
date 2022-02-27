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
            int min = q.front().second ; 
            int n = q.size() ; 
            int first , last ; 
            for(int i = 0 ; i < n ; i++ ) {
                int cid = q.front().second -  min ;
                TreeNode *t = q.front().first ; 
                q.pop() ;
                if(i == 0 ) first = cid ; 
                if(i == n - 1 ) last = cid ; 
                if(t->left ) q.push({t->left , 1LL*2*cid + 1 }) ;
                if(t->right) q.push({t->right , 1LL*2*cid + 2 })  ; 
            }
            ans = max(ans , last - first + 1 ) ; 
            
        }
        return ans ; 
        
        
        
    }
};