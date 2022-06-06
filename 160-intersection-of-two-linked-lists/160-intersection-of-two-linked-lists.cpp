/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1 , ListNode *h2) {
       //M1 using hashmap
//         unordered_map<ListNode*,int> m ;
//         ListNode *t ; 
//         t = h1 ; 
//         while( t ){
//             m[t]++ ;
//             t = t->next ;
//         }
//         t = h2 ; 
//         while(t){
//             if( m[t] ) return t ;
//             t = t->next ;
//         }
//         return NULL ; 
        
        
        
        
        //M2 by calculating diff b/w length of lists 
//         int l1 (0) , l2(0) ; 
//         ListNode *a , *b ;
//         a = h1 ; 
//         while(a) {
//             l1++ ; 
//             a = a->next ; 
//         }
//         b = h2 ;
//         while(b){
//             l2++ ; 
//             b = b->next ; 
//         }
        
//         int diff = abs(l1 - l2 ) ; 
//         a = h1 , b = h2 ;
//         if(l1 > l2 ){
//             while(diff--){
//                 a = a->next ;
//             }
//         }
//         else{
//             while(diff-- ){
//                 b = b->next ;
//             }
//         }
//         while(a != b ){
//             a = a->next ;
//             b = b->next ;
//             if(!a or !b ) return NULL ;
//         }
//         return a ;
        
        
        
        
        //M3
        // https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/1092898/JS-Python-Java-C%2B%2B-or-Easy-O(1)-Extra-Space-Solution-w-Visual-Explanation
        
        ListNode *a , *b ; 
        a = h1 , b = h2 ; 
        while( a != b ){
            a = a ? a->next : h2 ;
            b = b ? b->next : h1 ;
            
            
        }
        return a ; 
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        
        
    }
};