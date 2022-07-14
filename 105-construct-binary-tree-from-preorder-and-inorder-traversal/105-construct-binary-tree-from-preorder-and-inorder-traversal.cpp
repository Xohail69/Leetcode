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
    unordered_map<int,int> m ; 
     int pre_ix = 0 ;
    TreeNode* gft(vector<int>& preorder, vector<int>& inorder , int s , int e ){
       
        if(s > e ) return NULL ; 
        TreeNode *node = new TreeNode(preorder[pre_ix++] ) ; 
        if(s == e ) return node ;
        int split_ix = m[node->val] ; 
        node->left = gft(preorder , inorder , s , split_ix - 1 ) ; 
        node->right = gft(preorder , inorder , split_ix + 1 , e ) ; 
        return node ; 
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0 ; i < inorder.size() ; i++ )
            m[inorder[i] ] = i ;
        
        auto x =  gft(preorder , inorder , 0 , inorder.size() - 1 ) ;
        // pre_ix = 0 ; 
        return x ; 
    }
};