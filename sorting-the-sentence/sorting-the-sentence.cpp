class Solution {
public:
    string sortSentence(string s) {
//         vector<string> v(10 , "" ) ;
//         string str ;
//         for(int i = 0 ; i< s.size() ; i++ ) {
         
//              int j = i;
//             string temp;
//             while(!isdigit(s[j])){
//                 temp.push_back(s[j]);
//                 j++;
//             }
//             v[s[j]-'0'] = temp;
//             i = j+1;
            
//         }
//       str = "" ;
//         for(int i = 1 ; i < 10 ; i++ ){
//             if(v[i].length() > 0 ) str += v[i] + " " ;
//         }
//         str.pop_back() ;
//         return str ;
        
        
        
        //Using Stringstream  in O(nlogn )
        stringstream words(s);
        string word ;
        pair<int,string> m ;
       // vector<pair<int,string> > sent ;
         map<int , string> mp ;
        while(words>>word) {
            int len = word.size() ;
            int i = word[len - 1 ] - 48 ;
            //sent.push_back({i , word.substr(0 , len-1 ) }) ;
            mp[i] = word.substr(0 , len-1) ;
        }
        
       // sort(sent.begin() , sent.end() ) ;
        
           string ans = "";
        // int len = sent.size();
        // for(int i=0; i<len; i++){
        // {
        //     ans += sent[i].second;
        //     if(i!= len-1)
        //         ans += " ";
        // }
       
        for(auto &y : mp ){
            ans += y.second + " " ;
        }
            ans.pop_back() ;
        
         return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};