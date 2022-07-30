class Solution {
public:
    #define db1(x) 						  cout<<#x<<"= "<<x<<'\n'
#define db2(x,y) 					  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<'\n'
#define db3(x,y,z) 				  cout<<#x<<"= "<<x<<", "<<#y<<"= "<<y<<", "<<#z<<"= "<<z<<'\n'
    
    int count(string &s , char c ){
        int cunt =0  ; 
        for(auto x : s )
            if(x == c ) cunt++ ; 
        return cunt ; 
    }
    bool is_subset(string &s  , vector<int> &f ){
        for(char i = 'a' ; i < 'z' ; i++ ){
            if(count(s , i ) < f[i - 'a'] )
                return 0 ;
        }
        return 1 ; 
    }
    vector<int> counter(string &s ){
        vector<int>h(26 , 0 ) ; 
        for(auto x:s ) 
            h[x-'a']++ ;
        return h ; 
    }
    vector<string> wordSubsets(vector<string>& A , vector<string>& B ) {
        

//         vector<string> ans ; 
//         vector<int> f(26 , 0  ) ; 
        
//         for(auto &s : words2 ){
//             for(char i = 'a' ; i < 'z' ; i++ ){
//                 f[i - 'a' ] = max(f[i - 'a' ] , count(s , i ) ) ; 
//             }
//         }
        
//         for(auto &x : words1 ){
//             if(is_subset(x , f ) )
//                 ans.push_back(x ) ; 
//         }
//         return ans ; 
        
        
        
        
//            vector<string> ans ;
//         vector<int>count(26) , temp(26) ; 
//         for(auto &x : words2 ){
//             temp = counter(x) ; 
//             for(int i = 0 ;  i < 26 ; i++ ){
//                 count[i] = max(count[i] , temp[i] ) ; 
//             }
//         }
        
//         for(auto &y : words1 ){
//             temp = counter(y) ; 
//             int i = 0 ; 
//             for( ; i < 26 ; i++ ) {
//                 if(temp[i] < count[i] ) 
//                     break ;
//             }
//             if(i == 26 ) ans.push_back(y) ; 
//         }
        
//         return ans ; 
        
        
        string unit = "";
        for (auto& v : B) {
            string tmp;
            sort(v.begin(), v.end());
            set_union(v.begin(), v.end(), unit.begin(), unit.end(), back_inserter(tmp));
            // db2(tmp , unit ) ; 
            swap(unit, tmp);
            // db2(tmp , unit ) ; 
        }
        vector<string> res;
        for (auto a : A) {
            string t = a;
            sort(t.begin(), t.end());
            if (includes(t.begin(), t.end(), unit.begin(), unit.end())) {
                res.push_back(a);
            }
        }
        return res;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};