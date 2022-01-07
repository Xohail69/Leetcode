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
    Solution(ListNode* head) {
        ListNode* p = head ;
        HEAD = head ;
        while(head) {
            l++ ; head = head->next ;
        }
    }
    
    int getRandom() {
        int idx = rand()%l ;
        ListNode* t = HEAD ;
        for(int i = 0 ; i < idx ; i++ ) { t= t->next ; }
        return t->val ;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */