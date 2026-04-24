class StockSpanner {
private:
    stack<int> s2;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        s2.push(price);
        stack<int> s = s2;
        int ans = 0;
        while(s.top()<=price)
        {
            ans++;
            s.pop();
            if(s.empty())
            {
                break;
            }
        }
        return(ans);
 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */