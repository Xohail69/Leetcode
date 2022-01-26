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
   
    void inorder(TreeNode *root , vector<int> &v) {
        if( !root ) return ;
        inorder(root->left , v) ;
        v.push_back(root->val) ; 
        inorder(root->right , v) ;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        // v = {} ;
        // inorder(root1) ;
        // inorder(root2) ;
        // sort(v.begin() , v.end() ) ;
        // return v ;
        
        //M2
        vector<int>a , b ;
         inorder(root1 , a ) ;
        inorder(root2 , b ) ;
        vector<int> ans(a.size()+b.size());
        int i=0,j=0,k=0;
        while(i<a.size() and j<b.size())
            ans[k++]=a[i]<b[j] ? a[i++] : b[j++];

        while(i<a.size())
            ans[k++]=a[i++];

        while(j<b.size())
            ans[k++]=b[j++];

        return ans;
        
        
        
    }
};