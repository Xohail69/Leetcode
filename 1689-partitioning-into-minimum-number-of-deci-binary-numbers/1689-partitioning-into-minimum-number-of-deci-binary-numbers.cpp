class Solution {
public:
    int minPartitions(string n) {
        int ans = 0 ; 
        if(n.size() == 1 ) return stoi(n) ; 
        for(int i = n.size() - 1 ; ~i ; i-- ){
            ans = max(ans , n[i]-'0' ) ;
        }
        return ans ; 
    }
};