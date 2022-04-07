class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1) return stones[0] ;
        priority_queue<int> p(begin(stones) , end(stones) ) ;
        while( p.size() > 1 ){
            auto a = p.top() ; 
            p.pop() ; 
            auto b = p.top() ; 
            p.pop()  ;
            
            if(a != b) p.push(a-b) ;
        }
        return p.empty() ? 0 : p.top() ;
        
        
        
//          priority_queue<int> pq(begin(A), end(A));
//         while (pq.size() > 1) {
//             int x = pq.top(); pq.pop();
//             int y = pq.top(); pq.pop();
//             if (x > y) pq.push(x - y);
//         }
//         return pq.empty() ? 0 : pq.top();
        
//          multiset<int> s(begin(st), end(st));
//   while (s.size() > 1) {
//     auto w1 = *prev(s.end());
//     s.erase(prev(s.end()));
//     auto w2 = *prev(s.end());
//     s.erase(prev(s.end()));
//     if (w1 - w2 > 0) s.insert(w1 - w2);
//   }
//   return s.empty() ? 0 : *s.begin();
        
    }
};