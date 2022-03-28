class Solution {
public:
    bool search(vector<int>& a, int x) {
         int l = 0 , h = a.size()-1 , mid ;
                while(l<=h) {
                    mid = l + (h-l)/2 ;
                    if( a[mid] == x ) return true ;
                    //If left half is sorted
                    if(a[l] == a[mid] and a[mid] == a[h] ) { l++ ; h-- ; continue ;}
                    
                    if( a[mid] >= a[l] ){
                        if(a[l]<= x and x < a[mid] ) 
                            h = mid - 1 ;
                        else l = mid + 1 ;
                    }
                    //if right half is sorted
                    else if (a[mid] < a[l] ) {
                        if(a[mid] < x and x <= a[h]) 
                            l = mid+1 ;
                        else h = mid - 1 ;
                    }
                    
                }
        return false ;
         
          
            
         
           
        
        
        
    }
};