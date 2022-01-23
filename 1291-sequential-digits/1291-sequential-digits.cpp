class Solution {
public:
    vector<int> res ;
    void dfs(int low  , int high , int i , int num ) {
        if(num >= low and num <= high) res.push_back(num ) ;
        if(num > high or i > 9 ) return ;
        dfs(low , high , i+1 , num*10 + i) ;
        
    }
    vector<int> sequentialDigits(int low, int high) {
        //M1 Create all possible numbers & if number lies b/w l & h then add
        // it to the ans 
        // TC - O(n) or say constant 
        // vector<int>all = {  12,23,34,45,56,67,78,89,
        //                  123,234,345,456,567,678,789,
        //                  1234,2345,3456,4567,5678,6789,
        //                  12345,23456,34567,45678,56789,
        //                  123456,234567,345678,456789,
        //                  1234567,2345678,3456789,
        //                  12345678,23456789,
        //                  123456789
        // };
        // vector<int> ans ;
        // for(int i = 0 ; i < all.size() ; i++ )  {
        //      if(all[i] < low ) continue ;
        //      if(all[i] > high) break ;
        //     ans.push_back(all[i]) ;
        // }
        // return ans ;
        
        
        
        //M2 Using Rec keep generating the number till it lies in the given range 
        //O(nlogn)
        //https://leetcode.com/problems/sequential-digits/discuss/1711942/C%2B%2B-DFS-with-diagram-or-Basic-0-ms
        res = {} ;
        for(int i = 1 ; i <= 9  ; i++ ) dfs(low , high , i , 0) ;
            sort(res.begin() , end(res)) ;
        return res ;
        
        //this recursive M2 can be replaced by iteration as folllows :
//          vector<int> ans;
//         for(int u=1;u<=8;u++){
//             int num = u;
//             for(int j=u+1;j<=9;j++){
//                 num = num*10+j;
//                 if(num>=low && num <=high) ans.push_back(num);
//             }
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
        
        
        
        //M3 using strings and sliding window
//          string digit = "123456789";
//           vector<int> result;
//           int lenMin = to_string(low).size();
//           int lenMax = to_string(high).size();
//           for (int i = lenMin; i <= lenMax; i++)
//           {
//                for (int j = 0; j < 10 - i; j++)
//                {
//                     int num = stoi(digit.substr(j, i));
//                     if (num >= low and num <= high)
//                     {
//                          result.push_back(num);
//                     }
//                }
//           }
//           return result;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};


        