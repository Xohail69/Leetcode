class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
  
        vector<int> ans ; 
        int n = arr.size() ; 
        deque<int> q ; 
      
        for(int i = 0 ; i < n ; i++ ){
           if(q.size() and q.front() == i-k ) q.pop_front() ; 
           while(q.size() and arr[q.back() ] <= arr[i] ) q.pop_back() ; 
           q.push_back(i) ; 
           if(i >= k - 1 ) ans.push_back(arr[q.front() ]  ) ; 
            
        }
        return ans ; 
        
     
        
        
    }
};