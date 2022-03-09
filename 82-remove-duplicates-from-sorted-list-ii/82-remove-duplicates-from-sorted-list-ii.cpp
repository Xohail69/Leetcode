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
//     ListNode* create(map<int , int > &s){
//        // ListNode dummy(0) , *tail = &dummy ; 
//         auto x = s.begin() ;
//         while(x->second != 1 and x != s.end() ) x++ ;
//         if( x== s.end() ) return NULL ; 
//         ListNode *head = new ListNode(x->first , NULL ) ;
//         ListNode *t = head ;
//         ++x ;
//         for( ; x != s.end() ; x++ ){
//              while(x->second != 1 and x != s.end() ) x++ ;
//         if( x== s.end() ) return head ; 
//             ListNode *n =  new ListNode(x->first , NULL )  ;
//             t->next = n ; 
//             t = t->next ; 
//         }
//         return head ; 
//     }
    
    
    ListNode* deleteDuplicates(ListNode* head) {
        if( !head or !head->next ) return head ;
        //Crappy sol using map
//         map<int , int> s ; 
//         ListNode* p = head ; 
//         while(p){
//            s[p->val]++ ; 
//             p = p->next ;
//         }
//         return create(s) ;
        
        
    
        
        
        
        
        //Best in O(n) & O(1)
        ListNode sentinel(0 , head ) ;
        ListNode *p = &sentinel  ; //Predecessor
        while( head ){
            // if it's a beginning of duplicates sublist 
            // skip all duplicates
            if(head->next and head->val == head->next->val){
                 // move till the end of duplicates sublist
                while(head->next and head->val == head->next->val )
                    head = head->next ; 
                
                // skip all duplicates
                p->next = head->next ;
            }
             // otherwise, move predecessor
            else p = p->next ; 
              // move forward
            head = head->next ; 
        }
        return sentinel.next ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};