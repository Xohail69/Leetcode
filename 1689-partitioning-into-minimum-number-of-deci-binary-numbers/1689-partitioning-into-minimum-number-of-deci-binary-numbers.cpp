class Solution {
public:
    int minPartitions(string n) {
        // int ans = 0 ; 
        // if(n.size() == 1 ) return stoi(n) ; 
        // for(int i = 0 ; i < n.size() ; i++ ){
        //     ans = max(ans , n[i]-'0' ) ;
        // }
        // return ans ; 
        
        
        return *max_element(begin(n) , end(n) ) - '0' ; 
    }
};