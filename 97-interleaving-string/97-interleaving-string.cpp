class Solution {
public:
     unordered_map<string,bool> m ;
    bool check(string s1 , string s2 , string s3 , int l1 , int l2 , int l3 , int p1 , int p2 , int p3 ){
        if(p3 == l3 ) 
            return (p1 == l1 and p2 == l2 ) ? 1 : 0 ;
        string key = to_string(p1)+"*"+to_string(p2)+"*"+to_string(p3) ;
        if(m.count(key) ) return m[key] ; 
        if(p1 == l1 )
            return m[key] = s2[p2] == s3[p3] ? check(s1 , s2 , s3 , l1 , l2 , l3 , p1 , p2+1 , p3+1 ):false ;
        if(p2 == l2 )
            return m[key] = s1[p1] == s3[p3] ? check(s1 , s2 , s3 , l1 , l2 , l3 , p1 + 1 , p2 , p3 + 1 ) :false ;
        bool one = 0 , two =  0 ; 
        if(s1[p1]==s3[p3])
            one = check(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
        if(s2[p2]==s3[p3])
            two = check(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
        
        return m[key] = one or two;
    }
    
    
    
    
    bool isInterleave(string s1, string s2, string s3) {
        int l1  = s1.size() , l2 = s2.size() , l3 = s3.size() ; 
        if(l3 != l2 + l1 ) return 0 ; 
        return check(s1 , s2 , s3 , l1 , l2 , l3 , 0 , 0  , 0 ) ;
    }
};