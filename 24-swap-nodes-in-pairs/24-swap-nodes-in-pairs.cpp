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
    ListNode* swapPairs(ListNode* head) {
        if( !head or !head->next ) return head ;
        ListNode *p , *q , *t , *nhead ;
        nhead = head->next ; 
        p = head ;
        while( 1 ){
            q = p->next ; 
            t = q->next ; 
            q->next = p ; //Changing links 
            if(!t or !t->next){ //!t is for even list length & !t->next is for odd length list 
                p->next = t ; 
                break ; 
            }
            p->next = t->next ; 
            p = t ; 
            
        }
        return nhead ;
    
    
    
    }
};