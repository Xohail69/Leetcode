class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {

//            int l = 0  , h = a.size()-1 ;
//         if(a.size()== 1 )return a[0] ;
//         else if(a[0] != a[1]) return a[0] ;
//         else if(a[h] != a[h-1] ) return a[h] ;
//         while(l<=h){
//             int mid = l + (h-l)/2 ;
//             if(a[mid] != a[mid-1] && a[mid] != a[mid+1]) 
//                 return a[mid] ;
//      if( ( (mid%2)== 0 && a[mid] == a[mid+1]) || ( (mid%2)==1 && a[mid] == a[mid-1]) ) 
//                 l = mid + 1 ;
//             else h = mid - 1 ; 
            
//         }
//         return 0 ;
        
        
        //logic is similar to above but it is more clean 
        int l = 0  ,  h = a.size()-2 ; 
        // we are taking high = size -2,because if single element is present at last index then low will shrink to the last index
          while(l<=h){
            int mid = l + (h-l)/2 ;
            if( a[mid] == a[mid^1]) //xor with 1 makes even num to next odd & odd num to                                      // previous even 
                l = mid + 1 ;
              else h = mid - 1 ;
          
          
          }
        return a[l] ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};