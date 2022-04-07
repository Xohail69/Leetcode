class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1) return stones[0] ;
        priority_queue<int> p ;
        for(auto x : stones) p.push(x) ;
        while( !p.empty() ){
            auto a = p.top() ; 
            p.pop() ; 
            int b = -1 ;
           if(!p.empty())
            {  b = p.top() ; 
            p.pop()  ;}
            
            else return a; 
          if(b != -1 ) { int left = max(a , b) - min(a,b) ;
            if(left) p.push(left) ;}
        }
        return 0 ;
    }
};