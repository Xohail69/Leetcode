class Solution {
public:
    vector<int> findErrorNums(vector<int>& a ) {
//         int xo = 0 ; 
//         for(auto x : a ) xo ^=x ; 
//         int n = a.size() ; 
//         for(int i =  1  ; i <=  n ; i++ ){
//             xo ^= i ; 
//         }
//         int rightmost = xo & ~(xo - 1 ) ; 
//         int x1 = 0 , x2 = 0 ; 
//         for(auto i : a ){
//             if(rightmost & i )
//                 x1 ^= i ; 
//             else x2 ^= i ; 
//         }
//         for(int i = 1 ; i <= n ; i++ ){
            
//             if(rightmost & i )
//                 x1 ^= i ; 
//             else x2 ^=  i ; 
//         }
        
//         for(auto i : a ){
//             if(i == x1 )
//                 return {x1 , x2 } ; 
//         }
        
        // return {x2 , x1  } ; 
        
        
        
        
        
        
        
        
        
//         int dup = -1 , miss = -1 ; 
//         for(auto i : a ){
//             i = abs(i) ; 
//             if(a[i-1] < 0 )
//                 dup = i  ; 
//             else a[i-1 ] *= -1  ; 
//         }
//         for(int  i = 0 ; i < a.size() ; i++  ) 
//             if(a[i] > 0 )
//                 miss = i + 1 ; 
//         return {dup , miss } ; 
        
        
        
        
        
        
        
        
        
         /** Assume m is the missing and d is the duplicate element
         diff= m-d;
         squareDiff= m^2-d^2;
         sum=m+d= squareDiff/diff
         =>sum    = (m+d)(m-d)/(m-d);
         now m=(sum+diff)2;
         and d= (sum-diff)2;
        **/
     long long   int diff=0;
      long long  int sqaureDiff=0;
        for(long long int i=0;i<a.size();i++){
            /** 
            The order doesnot matter. keep adding the 1 to n and simultaneously subracting  corresponding array element.
            Use i+1 to get 1 to n  since i is the index number which is zero based.
            **/
            diff+=(i+1)-a[i];
            /** squareDiff is also calculated in the same way as diff is calculated. **/
            sqaureDiff+= (i+1)*(i+1)-a[i]*a[i];
        } 
       int sum=sqaureDiff/diff;
      return {(int)(sum-diff)/2, (int)(sum+diff)/2};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};