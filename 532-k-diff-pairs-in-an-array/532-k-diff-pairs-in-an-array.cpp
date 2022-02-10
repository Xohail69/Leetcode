class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        //M1 TC - O(n) and SC - O(N) 
//         there are 2 cases :-

//1. If k > 0, then in this case we just need to check wether the counter part exists or not. So, if we are iterating 'x + k' in our map, then we can increment our count

//2.  If k == 0, then we just need to check if x is more then 1 or not [x > 1] in our map.

// But another thing we need to note that here as we iterate from the array after doing counting. Then we will get "1" two times. So, to avoid this instead of iterating over the array, we will iterate over the keyset of this map, which will give us the unique no. i.e. (3,1,4,5).
        
        
//         unordered_map<int,int> m ;
//         for(auto x: a) m[x]++  ;
//         int c =0;
//         for(auto x: m){    
//         if ((!k and x.second > 1) or (k and m.count(x.first + k)))
//             c++ ;
        
//         }
//         return c ;
        
        
        
        //M2 Using BS 
        //TC O(NlogN) SC O(1) {if sorting space is not counted}
//         sort(a.begin() , a.end()) ;
//         set<int>s ;
//         for(auto i = a.begin() ; i != a.end() ; i++ ) {
//             if(binary_search( i+1 , a.end() , *i + k )){
//                 s.insert(*i) ;
//             }
//         }
//         return s.size() ;
        
        
        //M3 usint Two Prs 
        //TC O(nlogn) SC O(1) {if sorting space is not counted}
        
        
        
        
    
         int start = 0;
    int end = 0;
    int pairCount = 0;
    sort(a.begin() , a.end()) ;
    while(start < a.size() && end < a.size() ) {
      if(start == end || a[start] + k > a[end]) end++;
      else if(a[start] + k < a[end]) start++;
      else {
        pairCount++;
        start++;
        while(end < a.size() - 1 && a[end] == a[end + 1]) end++;
        end++;
      }
    }
    return pairCount;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};