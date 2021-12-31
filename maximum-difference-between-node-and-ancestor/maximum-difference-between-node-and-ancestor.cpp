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
    
    int maxAncestorDiff(TreeNode* root) {
        if ( !root ) return 0 ; 
    return  helper(root , root->val , root->val) ;
        
    }
    int helper(TreeNode* p , int curMax , int curMin) {
        if(p == NULL ) return curMax - curMin ;
      
        curMax = max(curMax , p->val) ;
        curMin = min(curMin , p->val) ;
        int left = helper(p->left , curMax , curMin) ;
        int right = helper(p->right , curMax ,curMin) ;
        return max(left , right );
    }
};