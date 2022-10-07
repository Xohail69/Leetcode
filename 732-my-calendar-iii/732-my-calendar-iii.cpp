class MyCalendarThree {
public:
    map<int,int> m ; 
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++ ;
        m[end]-- ;
        int curr(0) , ans(0)  ;
        for(auto &[_ , x] : m ) {
            curr += x ; 
            ans = max(ans , curr ) ; 
        }
        return ans ; 
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */