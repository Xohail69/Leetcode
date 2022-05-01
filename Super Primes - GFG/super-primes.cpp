// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int superPrimes(int n)
	{   
	  // o + o = even (which can't be prime except 2 )
	  // e + e = even (which can't be super prime )
	  // o + e = odd (this can be super prime if e = 2 )
// 	   sum of odd and even is always odd.
// Thus, for a prime number “n” to be super-prime “n-2” must be prime.
// 	    So if consider two primes that are odd, we will be getting an even 
// 	    number which will never be a prime. Because we only have 2 as prime in 
// 	    even number list.So one thing is
// sure is that one number is 2 and the other number will be SuperPrime - 2.
	    vector<bool>prime(n+1 , true ) ;
	    for(int i = 2 ; i*i <=n ; i++ ){
	        if(prime[i]){
	            for(int j = i*i ; j <=n ; j += i )
	                prime[j] = false ;
	        }
	    }
	    int cunt(0) ;
	    for(int i = 5 ; i <= n ; i++ ){
	        if(prime[i] and prime[i-2] ) cunt++ ;
	    }
	    return cunt ;
	    // Your code goes here
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends