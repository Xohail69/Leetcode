class MyCalendar {
    
    map<int,int> m ; 
    
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        m[start]++ ; 
        m[end]-- ; 
        int sum (0) ; 
        for(auto &x : m ){
            sum += x.second ; 
            if(sum > 1 ){
                m[start]-- ;
                m[end]++ ; 
                return 0 ; 
            }
        }
        return 1 ; 
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */