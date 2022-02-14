/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     T''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''reeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root) {
        if( !root ) return 0 ;
         int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left, right) + 1;
     //or one liner
        //   return max( helper(root->left) , helper(root->right) ) + 1 ;
        
        
        
        
    }
    int maxDepth(TreeNode* root) {
//         DFS
// Time Complexity: O (n)
// Space Complexity: O (h)
       // return helper(root) ;
        
        //M2 using BFS
// Time Complexity: O (n)
// Space Complexity: O (n)
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
        return depth ;
        
        
        
    }
};
