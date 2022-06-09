class Solution {
public:
   int bs(vector<int> &v ,int l , int h , int x){
        int mid ;
        while(l<=h){
            mid = l + (h-l)/2 ;
            if(v[mid]==x) return mid ;
            else if(v[mid] < x) l = mid + 1 ;
            else h = mid - 1 ;
        }
        return -1 ;
    }
    
    vector<int> twoSum(vector<int>& n, int target) {
        //M1 using Two pointer 
        
//         int i = 0 , j = n.size()-1 ;
//         while(j>i){
//             int sum = n[i]+n[j] ;
//             if( sum == target ) return {i+1 , j+1};
//             else if( sum<target ) i++  ;
//                 else j-- ;
//         }
//         return n ;
        
        //M2 using Binary Search 
        
        for(int i = 0 ; i< n.size() ; i++){
            int j = bs(n , i+1 , n.size()-1 , target - n[i]) ;
            if (j != -1 ) return {i+1 , j+1 } ;
        }
        return n ;
    }
};