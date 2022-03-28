// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        
         unsigned int set1 = (x >> p1) & ((1U << n) - 1);
 
    /* Move all bits of second set to rightmost side */
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);
 
    /* Xor the two sets */
    unsigned int Xor = (set1 ^ set2);
 
    /* Put the Xor bits back to their original positions */
    Xor = (Xor << p1) | (Xor << p2);
 
    /* Xor the 'Xor' with the original number so that the
    two sets are swapped */
    unsigned int result = x ^ Xor;
 
    return result;
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends