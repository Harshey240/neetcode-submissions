class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {    
        int sz1 = s1.size();
        for(int i=0;i<sz1;i++)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        int sztemp = s2.size();            
        for(int j=0;j<sztemp;j++)
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int s = s1.top();
        s1.pop();
        return(s);
    }
    
    int peek() {
        return(s1.top());
    }
    
    bool empty() {
        return(s1.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */