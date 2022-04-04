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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *l , *r , *c ; // left , right and current prs
        
        l = r = c = head ;
        int cunt = 1 ; 
        while( c ){
            if(cunt < k )
                l = l->next ;
            
            if(cunt > k ) 
                r = r->next ;
            c = c->next ;
            cunt++ ;
        }
        swap(l->val , r->val) ;
        return head ; 
        
    }
};