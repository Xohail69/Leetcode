class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        //Using two pointers in O(n)
        int n = seats.size() ;
        int prev = -1 , next = 0 ;
        int ans = 0  ;
        for(int i = 0 ; i< n ; i++ ) {
            if(seats[i] == 1)  prev = i ;
            else {
                while(next < n and seats[next] ==0 or next < i ) next++ ;
                int left = prev == -1 ? n : i - prev ;
                int right = next == n ? n : next - i ;
                ans = max(ans , min(left , right)) ;
            }
        }
        return ans ;
        
        
        
        
        
        
        
        
        
    
//         If the current value is "0", keep going forward.
// Left pointer points to the position of left "1" and right pointer points to the position of right "1". Keep updating two pointers and calculate the max distance.
// Be careful of two situations: seats[0] is 0 and seats[len - 1] is 0. Just check them and get the final answer. Ex: 00101000.
//         int l = -1  , n = seats.size() , maxDist = 0 ;
//         for(int r  = 0 ;  i < n ; i++ ) {
//             if(seats[r] == 1 ) {
//                 if(l == -1 ) {  //handles edge case when it leads with 0. 
//                     maxDist = r ;
//                 }
//                 else { //when your seat is inbetween 1s, you need to find half point between the two so you divide by 2
//                     maxDist = max(maxDist , (r - l ) / 2 ) ;
//                 }
//                 l = r ;
//             }
            
//         }
             //handles edge case when ends with 0.
//         if(seats[n-1] ==0 ) maxDist = max(maxDist , n-1-l ) ;
//         return maxDist ;
    }
};