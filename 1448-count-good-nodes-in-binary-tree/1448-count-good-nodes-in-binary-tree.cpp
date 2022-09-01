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
    void helper(TreeNode *root , int maxi  , int &cunt ){
        if(!root ) return ; 
        if(root->val >= maxi ){
            cunt++ ; 
            maxi = root->val ;
        }
        helper(root->left , maxi , cunt ) ; 
        helper(root->right , maxi , cunt ) ;
    }
     int dfs(TreeNode *root, int maxSoFar) {
		// if root is null then we have no good node
        if(root == nullptr) return 0;
		
        if(root->val >= maxSoFar) {
		// if my node's value is greater than or equal to all the nodes we have encountered so far 
		// then we are sure that our this node is good node and we can safely say we found 1 good node
		// and we continue exploration for left and right half
		
		// NOTE : We will change maxSoFar with root->val (because it is maximum value so Far)
            return 1 + dfs(root->left, root->val) + dfs(root->right, root->val);
        }
		
		// Since if condition failed at this point we know that current node is not a good node
		// but we can keep exploring  left and right half to find possible good nodes
		// NOTE : We are not changing maxSoFar here
        return dfs(root->left, maxSoFar) + dfs(root->right, maxSoFar);
    }
    
    int goodNodes(TreeNode* root) {
        // int maxi = root->val ; 
        // int cunt = 0 ; 
        //  helper(root , maxi  , cunt ) ;
        // return cunt  ; 
        
        return dfs(root , INT_MIN) ;
        
        
        
        
    }
};