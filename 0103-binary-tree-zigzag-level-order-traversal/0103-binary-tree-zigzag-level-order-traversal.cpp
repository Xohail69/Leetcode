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
          queue<TreeNode*> q ; 
        q.push(root) ; 
        bool LtR = 1 ; 
        while(q.size() ) {
            int n = q.size() ; 
            vector<int> curr(n) ; 
            for(int i = 0 ; i < n ; i++ ) {
                auto t = q.front() ; 
                q.pop() ;
        // if moving right to left then place the value at back 
                int ix = LtR ? i : n - i - 1 ;
                curr[ix] = t->val ; 
                if(t->left) 
                    q.push(t->left) ; 
                if(t->right) 
                    q.push(t->right) ;
            }
            LtR =  !LtR  ;
            ans.push_back(curr) ;
        }
        return ans; 
        
        
        
       // Using reverse function on alternate levels ; 
        int cunt = 1; 
        while(q.size() ){
            int n = q.size() ; 
            vector<int> curr ; 
            while(n--){
                auto t = q.front() ; 
                q.pop() ;
                curr.push_back(t->val) ; 
                 if(t->left) 
                    q.push(t->left) ; 
                if(t->right) 
                    q.push(t->right) ;
                
            }
            if(cunt%2 == 0 ) reverse(curr.begin() , curr.end() ) ;
            cunt++ ; 
            ans.push_back(curr) ;
        }
        return ans; 
        
        
//         Using two stacks 
//         All you have to do is do the standard bfs(with two stacks instead) with two adjustments -

// instead of dequeueing from a queue, pop() from our first stack pointer. Simmilarly instead of enqueueing push to our second stack pointer.
// In queue you will push in left child then right child in every level. Here we alternately first push right and left (why? because you want to have level two in reverse order), then in second iteration left and right and so on.
// At the end of each level just swap the stack pointers before moving to next level.
//         stack<TreeNode*> a , b ; 
//         stack<TreeNode*> *s1 , *s2 ;
//         s1 = &a , s2 = &b ; 
//         a.push(root) ; 
//         while(!s1->empty() ){
//             vector<int> v ; 
//             while(!s1->empty() ){
//                 auto t = s1->top() ; 
//                 s1->pop() ; 
//                 v.push_back(t->val) ; 
//                 if(s1 != &b and t->left ) s2->push(t->left) ; 
//                 if(t->right) s2->push(t->right) ; 
//                 if(s1 == &b and t->left ) s2->push(t->left) ;
                
//             }
//             swap(s1 , s2  ) ; 
//             ans.push_back(v) ; 
//         }
//         return ans; 
        
        
        
//         Using deque
          deque<TreeNode*> dq;
        dq.push_back(root);
        bool isLTR = true;
        while(!dq.empty()) {
            int n = dq.size();
            vector<int> currLevel;
            if(isLTR) {
                isLTR = false;
                for(int i=0;i<n;++i) {
                    auto curr = dq.front();
                    dq.pop_front();
                    currLevel.push_back(curr->val);
                    if(curr->left)
                        dq.push_back(curr->left);
                    if(curr->right)
                        dq.push_back(curr->right);
                }
            } else {
                isLTR = true;
                for(int i=0;i<n;++i) {
                    auto curr = dq.back();
                    dq.pop_back();
                    currLevel.push_back(curr->val);
                    if(curr->right)
                        dq.push_front(curr->right);
                    if(curr->left)
                        dq.push_front(curr->left);
                }
            }
            ans.push_back(currLevel);
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};