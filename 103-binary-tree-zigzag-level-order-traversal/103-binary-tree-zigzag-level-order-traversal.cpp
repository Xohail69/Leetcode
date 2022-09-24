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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if( !root ) return {} ; 
      
        vector<vector<int>> ans ; 
        //   queue<TreeNode*> q ; 
        // q.push(root) ; 
        // bool LtR = 1 ; 
        // while(q.size() ) {
        //     int n = q.size() ; 
        //     vector<int> curr(n) ; 
        //     for(int i = 0 ; i < n ; i++ ) {
        //         auto t = q.front() ; 
        //         q.pop() ;
//         if moving right to left then place the value at back 
        //         int ix = LtR ? i : n - i - 1 ;
        //         curr[ix] = t->val ; 
        //         if(t->left) 
        //             q.push(t->left) ; 
        //         if(t->right) 
        //             q.push(t->right) ;
        //     }
        //     LtR =  !LtR  ;
        //     ans.push_back(curr) ;
        // }
        // return ans; 
        
        
        
//         Using reverse function on alternate levels ; 
//      '   int cunt = 1; 
//         while(q.size() ){
//             int n = q.size() ; 
//             vector<int> curr ; 
//             while(n--){
//                 auto t = q.front() ; 
//                 q.pop() ;
//                 curr.push_back(t->val) ; 
//                  if(t->left) 
//                     q.push(t->left) ; 
//                 if(t->right) 
//                     q.push(t->right) ;
                
//             }
//             if(cunt%2 == 0 ) reverse(curr.begin() , curr.end() ) ;
//             cunt++ ; 
//             ans.push_back(curr) ;
//         }
//         return ans; '
        
        
//         Using two stacks 
        stack<TreeNode*> a , b ; 
        stack<TreeNode*> *s1 , *s2 ;
        s1 = &a , s2 = &b ; 
        a.push(root) ; 
        while(!s1->empty() ){
            vector<int> v ; 
            while(!s1->empty() ){
                auto t = s1->top() ; 
                s1->pop() ; 
                v.push_back(t->val) ; 
                if(s1 != &b and t->left ) s2->push(t->left) ; 
                if(t->right) s2->push(t->right) ; 
                if(s1 == &b and t->left ) s2->push(t->left) ;
                
            }
            swap(s1 , s2  ) ; 
            ans.push_back(v) ; 
        }
        return ans; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};