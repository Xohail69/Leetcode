class Solution {
public:
    int increment(int &a , int &e , int &i , int &o , int &u , int n ){
        if(n == 1 ) return a+e+i+o+u ;
//         a = number of strings that start with a
// e = number of strings that start with e
// i = number of strings that start with i
// o = number of strings that start with o
// u = number of strings that start with u
        
        
        
        a = a + e + i + o + u ; 
        e = e + i + o + u ; 
        i = i + o + u ; 
        o = o + u ; 
        return increment(a , e , i , o , u , n - 1 )  ;
    }
    
    
    int countVowelStrings(int n) {
//         //M1 Here we can observe a pattern to this problem.
// 		  a  e  i  o  u
//     n=1   1  1  1  1  1  /a, e, i, o, u
//     n=2   5  4  3  2  1  /a-> aa,ae,ai,ao,au | e-> ee,ei,eo,eu | i-> ii,io,iu | o-> oo,ou | u-> uu
//     n=3   15 10 6  3  1
// If we observe from last there will be only 1 element which will start with u. Every other element will have the count of previous count + next element count. As example
// in n=2, i will be previous i(1) + count of next element, o(2) → 3
// in n=3, e will be previous e(4) + count of next element, i(6) → 10
              
              
//         int a = 1 , e = 1 , i = 1 , o = 1 , u = 1 ; 
//         return increment(a , e , i , o ,u , n  )  ; 
        
        
        //M2
          int a=1, e=1, i=1, o=1, u=1;
        
        while(--n){
            o += u;
            i += o;
            e += i;
            a += e;
        }
        
        return a+e+i+o+u;
        
        
        
        
//         //M3 using dp
//          vector<int> dp(5, 1);
//         int ans = 0;
        
//         while(--n){
//             for(int i=3; i>=0; i--){
//                 dp[i] += dp[i+1];
//             }
//         }
        
//         for(auto x:dp) ans += x;
        
//         return ans;
        
        
        // return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
        
        
    }
};