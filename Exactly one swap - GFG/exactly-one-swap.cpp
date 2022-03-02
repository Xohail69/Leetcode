// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string s)
    {
        
//         the answer should be nc2 == n*(n-1)/2
// but when there are duplicate characters in the string, swapping them 
// doesnt give a new unique string
// So, Count the frequency of each character
// if a character occurs c times , there will be c*(c-1)/2 useless swaps
// Thus subtract the useless swaps from the ideal answer at the end
 

// Another point to take care is when can we include the intial given string in 
// answer?
// we can include when atleast one character occurs more than once, because 
// swapping the duplicate character again gives the original string
    //   long long m[26] = {0} ; 
    //   for(int i = 0 ; i < s.size() ; i++ ){
    //       m[s[i]-'a']++ ; 
           
    //   }
    //   long long n = s.length() , ideal = n*(n-1)/2 , useless  = 0  ;
    //   for(int i = 0 ; i < 26 ; i++ ){
    //       useless += m[i]*(m[i] - 1)/2  ;
    //   }
    //   return useless>0 ? ideal - useless +1 : ideal - useless ;
       
        
        // Explanation :- At first we are calculating the frequencies of all the 
        // characters present in the given string. Then we are iterating over every
        // character of the string and finding that how many distinct strings can
        // be formed using that character by using the 
        // formula N - freq[current_character], here N is the length of string
        // and the current character can be swapped with all the characters apart
        // from the current character so total characters are N and current
        // character is having freq as freq[current_character] so it can be 
        // swapped with N - freq[current_character] characters, that's why we
        // are using this formula. And then we are dividing our answer by 2
        // becuase for example str = “geek” here if we are considering that 
        // g can be swapped with k then k swap with g will be of no use because 
        // g swap with k and k swap with g are both same only. So we are counting 
        // duplicate swaps in our ans so we will have to divide it by 2. Then we 
        // are simply checking that is there any character in the string that has 
        // freq greater than or equal to 2, if present then we are incrementing
        // our ans by 1 and then break. Because for example str = “geek” then if
        // e will be swapped with e, then “geek” will be formed so we will can 
        // consider “geek” also as our distinct string and this case was never
        // included before so we are incrementing our ans by 1 and we don't need
        // to check furthur so we break the loop. 

            
          long long m[26] = {0} , n = s.size();
          for(auto x : s) m[x-'a']++ ; 
          long long ans = 0 ;
          for(auto x : s)
            ans += n - m[x-'a'] ;
            
            ans /=2 ; 
            for(int i = 0 ; i < 26 ; i++ ){
                if(m[i] >= 2 ) {
                    ans++ ; break ;
                }
            }
            return ans ; 
        
        
        
        
        
        
        
        
        
        
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends