/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) 
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans ; 
        queue<TreeNode* > q ;
        q.push(root) ; 
        while(q.size() ) {
            int n = q.size() ; 
            double sum= 0  ; 
            int m = n ; 
            while(m-- ){
                auto t = q.front() ; 
                q.pop() ; 
                sum += t->val ; 
                if(t->left) q.push(t->left) ; 
                if(t->right) q.push(t->right) ; 
                
            }
            ans.push_back(1.0*sum/n) ;
        }
        return ans ; 
    }
};