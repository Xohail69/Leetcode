class KthLargest {
public: 
    priority_queue<int,vector<int> , greater<int> > p ;
    int kaam ;
    
    
    KthLargest(int k, vector<int>& nums) {
        
        static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
        
   for(auto x : nums ) {
       p.push(x) ;
        if(p.size() > k ) p.pop() ;
    }
        kaam = k ;
        
    }
    
    int add(int val) {
        p.push(val) ;
       if(p.size() > kaam ) p.pop() ; 
        return p.top() ;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */