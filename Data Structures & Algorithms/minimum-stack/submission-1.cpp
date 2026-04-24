class MinStack {
private:
    stack<int> s;
    stack<int> s2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s2.empty())
        {
            s2.push(val);
        }
        else
        {
            if(val<=s2.top())
            {
                s2.push(val);
            }
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top()==s2.top())
        {
            s2.pop();
        }
        s.pop();
    }
    
    int top() {
        return(s.top());
    }
    
    int getMin() {
        return(s2.top());
    }
};
