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
    int l = 0 ; 
    ListNode* HEAD ;
     vector<int> v ;
    
    
    Solution(ListNode* head) {
       //M1
        // HEAD = head ;
        // while(head) {
        //     l++ ; head = head->next ;
        // }
        
        
       //M2
         ListNode* p = head ;
        for( ; p ; p = p->next ) v.push_back(p->val) ;
        
    }
    
    int getRandom() {
        //M1 
        // int idx = rand()%l ;
        // ListNode* t = HEAD ;
        // for(int i = 0 ; i < idx ; i++ ) { t= t->next ; }
        // return t->val ;
        
        
        //M2 using extra space
        int idx = rand()%v.size() ;
        return v[idx] ;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */