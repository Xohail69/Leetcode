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
        //M1
        // vector<int> v ;
        // inorder(root1 , v) ;
        // inorder(root2 , v) ;
        // sort(v.begin() , v.end() ) ;
        // return v ;
        
        //M2 using Merging
//         vector<int>a , b ;
//          inorder(root1 , a ) ;
//         inorder(root2 , b ) ;
//         vector<int> ans(a.size()+b.size());
//         int i=0,j=0,k=0;
//         while(i<a.size() and j<b.size())
//             ans[k++]=a[i]<b[j] ? a[i++] : b[j++];

//         while(i<a.size())
//             ans[k++]=a[i++];

//         while(j<b.size())
//             ans[k++]=b[j++];
//         return ans;
        
        
        
        //M3 using stack 
//         //FYI Binary Tree inorder traversal give result in increasing order.
// Create stack for both tree and push element until root->left is NULL.
// Compare the top of both stack and push the smaller element in the result array.
// if any of the stack is empty we will push the top element of other stack and change root = root->rightand same condition will be taken care for other stack.
        
        
        
           vector<int> res;
          stack<TreeNode *> s1, s2;
          while (root1 || root2 || !s1.empty() || !s2.empty())
          {
               while (root1 != NULL)
               {
                    s1.push(root1);
                    root1 = root1->left;
               }
               while (root2 != NULL)
               {
                    s2.push(root2);
                    root2 = root2->left;
               }
               if (s2.empty() || (!s1.empty() && s1.top()->val <= s2.top()->val))
               {
                    root1 = s1.top();
                    s1.pop();
                    res.push_back(root1->val);
                    root1 = root1->right;
               }
               else
               {
                    root2 = s2.top();
                    s2.pop();
                    res.push_back(root2->val);
                    root2 = root2->right;
               }
          }
          return res;
        
        
        
        
        
        
    }
};