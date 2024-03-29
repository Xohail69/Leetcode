class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
//    int n = h.size() ; 
//         vector<int> left(n) , right(n) ;
//         stack<int> s ;
//         for(int i = 0 ; i < n ; i++ ) {
//             if(s.empty())       {    
//                 left[i] = 0 ; s.push(i) ;
//               }
//             else{
//                 while(!s.empty() and h[s.top()] >= h[i] )
//                     s.pop() ;
//                 left[i] = s.empty() ? 0 : s.top()+1 ;
//                 s.push(i) ;
//             }
//         }
//         //Clear the stack
//         while(!s.empty()) s.pop() ;
//         for(int i = n-1 ; i >=0 ; i--) {
//             if(s.empty()) {
//                 right[i] = n-1 ; s.push(i) ;
//             }
//             else{
//                 while(!s.empty() and h[s.top()] >= h[i] ) 
//                     s.pop() ;
//                 right[i] = s.empty() ? n-1 : s.top() - 1 ;
//                 s.push(i) ;
//             }
//         }
//         int maxia = 0 ;
//         for(int i = 0 ; i < n ; i++) {
//             maxia = max(maxia , h[i]*( right[i] - left[i] + 1 ) ) ;
//         }
//         return maxia ;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int n = h.size(), area = 0, ht, l;
		stack<int> indexes;
		for (int i = 0; i <= n; i++) {
			while (i == n || (!indexes.empty() && h[indexes.top()] > h[i])) {
				if (i == n && indexes.empty()) ht = 0, i++;
				else ht = h[indexes.top()], indexes.pop();			
				l = indexes.empty() ? -1 : indexes.top();
				area = max(area, ht * (i - l - 1));
			}
			indexes.push(i);
		}
		return area;
        
    }
};






















