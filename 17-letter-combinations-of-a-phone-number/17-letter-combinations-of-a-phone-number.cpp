class Solution {
public:
     vector<string> m  = { "abc" , "def" , "ghi" , "jkl" , "mno"  , "pqrs" , "tuv" , "wxyz" } , ans ;
        
        
        
    void helper(string &digits , int i , string &curr ){
        if(i == size(digits)) {
            ans.push_back(curr) ;
            return ;
        }
        else {
            for(auto x : m[digits[i] - '2'] ){
                curr.push_back(x) ;
                helper(digits , i + 1 , curr ) ;
                curr.pop_back() ;
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
         if(digits == "") return {} ;
        string t = "" ;
        helper(digits , 0 , t ) ;
        return ans ; 
        
//         vector<string> ans{""} ;
//         for(auto digit : digits ){
//             vector<string> extendComb ;
//             for(auto& curr : ans )
//                 for(auto newchar : m[digit - '2' ]) 
//                     extendComb.push_back(curr + newchar ) ;
            
//             ans = move(extendComb) ; // same as ans = extendComb , just avoids copying each value. You Can also use swap(ans,extendComb)
//         }
//         	return ans;
        
        
        
        
        

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return {} ;
    }
};