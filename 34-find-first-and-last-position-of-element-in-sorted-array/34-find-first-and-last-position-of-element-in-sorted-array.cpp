class Solution {
public:
    int first_pos(vector<int>& a , int x) {
        int n = a.size() ;
        int first = n  , l = 0 , h = n-1 ;
        while(l<=h) {
            int mid = l + (h -l)/2 ;
            if(a[mid] >= x) {
                first = mid ; h = mid-1 ;
            }
            else l = mid+ 1 ;
        }
        return first ;
        
        
    }
    
    
    vector<int> searchRange(vector<int>& n, int tar) {
        /// M1 using iterators 
//         auto it1 = find(n.begin() , n.end() , tar) ;
//             auto it2 = find(n.rbegin() , n.rend(), tar );
//             if( it1 == n.end() and it2 == n.rend() ) return {-1,-1} ;
//            int ix1 = it1 - n.begin() ;
//         int ix2 =  n.size() - (it2 - n.rbegin()) -1 ;
       
//         return {ix1 ,ix2 } ;
        
        // M2 using Bs :- 
//         int l = 0 , h = n.size()-1 ;
//         if(h == 0 and n[0] == tar ) return {0 , 0 } ;
//      int first = -1 , last = -1 ;
//         //finding first occurrence 
//         while(l<=h) {
//             int mid = l + (h-l)/2 ;
//             if(n[mid] == tar ) {
//                  first = mid ; 
//                 h = mid - 1 ; 
//             }
//             else if( n[mid] < tar ) l = mid + 1 ;
//             else h = mid - 1 ;
//         } 
//         if(first == -1 ) return {-1 , -1 } ;
//         //finding last occurrence
//         l = first  ; h = n.size()-1 ;
//          while(l<=h) {
//             int mid = l + (h-l)/2 ;
//             if(n[mid] == tar ) {
//                  last = mid ; 
//                 l = mid + 1 ;  
//             }
//             else if( n[mid] < tar ) l = mid + 1 ;
//             else h = mid - 1 ;
//         } 
//         return {first , last } ;
        
        //M3 
        //Last occurrence is found by Using first occurrence function & finding the first occurrence of tar+1 & subtracting 1 from it 
        
//         int first = first_pos(n , tar ) ;
//         int last = first_pos(n , tar+1 ) -1 ; 
//          if(first <= last) {
//             return {first, last};
//         }
//         return {-1, -1};
       
        
        
        //M4 using Lowerbound  O(logn)
        int f = lower_bound(n.begin() , n.end() , tar ) - n.begin() ;
        int l = lower_bound(n.begin() , n.end() , tar+1 ) - n.begin() -1 ;
        if(f<=l) return {f , l } ;
        else return {-1 , -1 } ;
        
         
        
        
        
        
        
        
    }
};