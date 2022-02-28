class Solution {
public:
    
    vector<string> summaryRanges(vector<int>& a ) {
        vector<string> ans ; 
        if(a.size() == 0 ) return {} ;
        if(a.size() == 1 ) return {to_string(a[0])} ;
        int start = a[0] ; 
        int end , n = a.size() ; 
        for(int i = 0 ; i < n ; i++ ) {
            if(i + 1 < n and a[i]+1 == a[i+1] ) continue ; 
            else{
                end = a[i] ; 
                if(start != end ) {
                    ans.push_back(to_string(start)+"->"+to_string(end)) ;
                }
                else ans.push_back(to_string(start)) ;
               if(i+1 < n ) start = a[i+1] ; 
            }
        }
        return ans ; 
        
        
    }
};