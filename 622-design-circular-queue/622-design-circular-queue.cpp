class MyCircularQueue {
public:
    vector<int>v ;
    int front , rear ;
    MyCircularQueue(int k) {
        v.resize(k+1 , -1 ) ;
        front = 0 ;
        rear = 0 ;
    }
    
    bool enQueue(int value) {
        if( (rear+1)%v.size() == front ) {
            return false ;
        }
        rear = (rear+1)%v.size() ; 
        v[rear] = value ;
        return 1 ;
    }
    
    bool deQueue() {
          if(front == rear ){
            return 0 ;
        }
        front = (front + 1 )%v.size() ; 
        v[front] = -1 ;
        return 1;
         
    }
    
    int Front() {
        return v[ (front+1)%v.size() ] ; 
    }
    
    int Rear() {
        return v[rear] ; 
    }
    
    bool isEmpty() {
        if(front == rear ) return 1 ;
        return 0 ; 
    }
    
    bool isFull() {
        if( (rear+1)%v.size() == front  ) return 1;
        return 0 ; 
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */