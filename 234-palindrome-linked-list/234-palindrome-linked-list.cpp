/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool pali(vector<int>& v ){
        int l = 0 , h = v.size() - 1; 
        while(l <= h ){
            if(v[l++] != v[h--] ) return 0 ;  
        }
        return 1 ; 
    }
    
    bool isPalindrome(ListNode* head) {
        vector<int> v ;
        for(auto n = head ; n ; n = n->next ){
            v.push_back(n->val) ; 
        }
        return pali(v) ;
        
        
    }
};