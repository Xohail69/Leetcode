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
        ListNode* reverse(ListNode* head) {
        if(!head ) return head ; 
        ListNode* p , *q , *r ; 
        p = head ; q = NULL ; r = NULL ; 
        while(p){
            r = q ; 
            q = p ; 
            p = p->next ; 
            q->next = r ; 
            
        }
        return q ; 
        
        }
    bool isPalindrome(ListNode* head) {
        vector<int> v ;
        for(auto n = head ; n ; n = n->next ){
            v.push_back(n->val) ; 
        }
        return pali(v) ;
        
        ListNode *p , *q ; 
        p = q = head ; 
        ListNode *t  ; 
        while( q->next ){
            p = p->next ; 
            q = q->next->next ; 
            if( !q ) t = reverse(p) ; 
            else if( !q->next ) t = reverse(p->next ) ;
        }
        while(t ){
            if(t->val != head->val) return 0 ; 
            t = t->next ; 
            head = head->next ; 
        }
        return 1 ; 
        
    }
};