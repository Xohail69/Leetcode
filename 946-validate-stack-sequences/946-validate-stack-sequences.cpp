class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         stack<int> s ; 
//         int  i = 0 , j = 0 ; 
//         int n = pushed.size() ; 
//         int m = popped.size() ;
//         while(j < m and i <n ){
         
//             while(i < n and pushed[i] != popped[j] ){
//              s.push(pushed[i++]) ;
//             }
//             if(pushed[i] == popped[j] ) s.push(pushed[i++]) ;
//            while(!s.empty() and s.top() == popped[j] ){
//                 s.pop() ; j++ ;
//             }
            
            
//         }
//         if(i == n and j < m ){
//             while(!s.empty() and popped[j] == s.top() ){
//                 s.pop() ; j++  ;
//             }
//         }
//         if(s.empty() and j == m ) return 1 ; 
//         else return 0 ; 
        
        
        
        int n =  pushed.size() ; 
        stack<int> s ; 
         int j = 0 ; 
        for(auto x : pushed ){
            s.push(x) ; 
            while( !s.empty() and j < n and s.top() == popped[j] ){
                s.pop() ; j++  ;
            }
        }
        return j == n ; 
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
     
    }
};