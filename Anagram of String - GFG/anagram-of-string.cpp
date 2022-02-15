// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2)
{
// Your code goes hereturn 
 vector<int> v(26 , 0 ) ;

 for(auto x : s1) v[x-'a']++ ;
 for(auto y : s2) v[y-'a']-- ;
 
 
int t = 0 ;
for(auto x  : v) {
    t += abs(x) ;
}
return t ; 























}