class Solution {
public:
    vector<int> countSmaller(vector<int>& a ) {
        int n = a.size() ;
        if(n == 1 ) return {0} ;
        else if(n==2 ) {
            if (a[0] > a[1] ) return {1 , 0} ;
        else return {0 , 0 } ; 
        }
        vector<int> count(n , 0 ) ;
        vector<pair<int,int>> v(n) ;
        for(int i = 0 ; i<n  ; i++ ) {
            v[i].first = a[i] ;
            v[i].second = i ;
        }
        mergesort(count , v , 0 , n-1 ) ;
        
        return count ;
        
        
        
        
        return {} ;
    }
    
    void mergesort(vector<int> &count , vector<pair<int, int>> &v , int l , int h){
        if(l < h ) {
            int mid = l + (h-l)/2 ;
            mergesort(count , v , l , mid ) ;
            mergesort(count , v , mid+1 , h ) ;
            Merge(count , v , l , mid , h) ;
        }
    }
    void Merge (vector<int> &count , vector<pair<int, int>> &v , int l , int mid , int h ){
        
        vector<pair<int , int>> temp(h-l + 1 ) ;
        int i = l , j = mid + 1 , k = 0 ;
        while(i <= mid and j <= h){
            if(v[i].first <= v[j].first ) {
                temp[k++] = v[j++] ;
            }
            else {//             it means all elements to right will be smaller bcz here we're sorting in decending format
                count[v[i].second] += h- j + 1 ;
                temp[k++] = v[i++] ;
            }
            
        }
        while(i<=mid) temp[k++] = v[i++] ;
        while(j<= h) temp[k++] = v[j++] ;
        
        for (int i = l; i <= h; i++)
        {
            v[i] = temp[i - l];
        }
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};