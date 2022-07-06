class Solution {
public:
    int fib(int n) {
        
        // if(n == 0 ) return 0 ;
        // vector<int> dp (n + 1 , 0 ) ; 
        // dp[1] = 1 ;
        // for(int i = 2 ; i <= n ; i++ ){
        //     dp[i]  =  dp[i-1] + dp[i-2]  ;
        // }
        // return dp[n] ; 
        
        
         if(n < 2) 
            return n ;
    	int a = 0, b = 1, c = 0;
        for(int i = 1; i < n ; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
        
        
        
        
        
        
//         Using Binet's Formula for the Nth Fibonacci involves the usage of our golden section number Phi.
// Phi = ( sqrt(5) + 1 ) / 2
// Using approximation equation is good enough here, since we know N >= 0 && N <= 30, we can safely use the following rounded function
// Fib(N) = round( ( Phi^N ) / sqrt(5) )

// Time Complexity - O(1)
// Space Complexity - O(1)

//         double phi = (sqrt(5) + 1) / 2;     
//         return round(pow(phi, N) / sqrt(5));
        
        
    }
};