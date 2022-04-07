class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1) return stones[0] ;
        //Using PQ Space Complexity : O(n)
        //Time Complexity : O(n log(n))
//         priority_queue<int> p(begin(stones) , end(stones) ) ;
//         while( p.size() > 1 ){
//             auto a = p.top() ; 
//             p.pop() ; 
//             auto b = p.top() ; 
//             p.pop()  ;
            
//             if(a != b) p.push(a-b) ; // if condition is necessary here becox if a==b then 0 will also get added in our heap & we don't want that right 
//         }
//         return p.empty() ? 0 : p.top() ;
        
        
        //Using multiset 
         multiset<int> s(begin(stones), end(stones));
  while (s.size() > 1) {
    auto x = *prev(s.end());
    s.erase(prev(s.end()));
    auto y = *prev(s.end());
    s.erase(prev(s.end()));
    if (x != y ) s.insert(x - y );
  }
  return s.empty() ? 0 : *s.begin();
        
    }
};