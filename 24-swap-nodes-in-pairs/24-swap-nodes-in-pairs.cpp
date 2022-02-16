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
        
       //Iterative 
//         if( !head or !head->next ) return head ;
//         ListNode *p , *q , *t , *nhead ;
//         nhead = head->next ; 
//         p = head ;
//         while( 1 ){
//             q = p->next ; 
//             t = q->next ; 
//             q->next = p ; //Changing links 
//             if(!t or !t->next){ //!t is for even list length & !t->next is for odd length list 
//                 p->next = t ; 
//                 break ; 
//             }
//             p->next = t->next ; 
//             p = t ; 
            
//         }
//         return nhead ;
    
    
        
        
        ///Recursive M1
         if( !head or !head->next ) return head ;
        ListNode *curr = head ;
        ListNode *nex = NULL ; 
        ListNode *prev = NULL  ;
        int cunt = 0 ; 
        while( curr and cunt < 2  ){
            nex = curr->next ; 
            curr->next = prev ; 
            prev = curr  ;
            curr = nex ; 
            cunt++  ;
        }
        if( nex ){
            head->next = swapPairs(nex) ;
        }
        return prev ; 
        
        
        //M2
//          if( !head or !head->next ) return head ;
//         ListNode *t = head->next ;
//         head->next = swapPairs(t->next) ;
//         t->next = head ; 
//         return t ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    }
};