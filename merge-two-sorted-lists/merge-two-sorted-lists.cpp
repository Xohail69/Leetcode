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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //Using Recursion
        //If l1 is NULL return l2 and vice-versa. This will become the base case.
//Then in recursive case we will compare the value of the nodes at l1 and l2. Res pointer will point to the node smaller in value. We will use recursion for repeating the same steps till any one of the list becomes NULL.
        if(l1 == NULL ) return l2 ;
        if(l2 == NULL ) return l1 ;
        ListNode *res ; 
        if(l1->val <= l2->val ){
            res = l1 ;
            res->next = mergeTwoLists(l1->next , l2 ) ;
        } 
        else {
            res = l2 ;
            res->next = mergeTwoLists(l1 , l2->next ) ;
        }
        return res ;
    }
};