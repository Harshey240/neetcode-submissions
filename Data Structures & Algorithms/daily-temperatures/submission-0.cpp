class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        stack<int> idx;
        int szt = temperatures.size();
        vector<int> ans(szt,0);
        for(int i=0;i<szt;i++)
        {
            if(s.empty())
            {
                s.push(temperatures[i]); 
                idx.push(i);
            }
            else
            {
                while(temperatures[i]>s.top())
                {
                    ans[idx.top()] = i - idx.top();
                    s.pop(); 
                    idx.pop();
                    if(s.empty())
                    {
                        break;
                    }
                }
                s.push(temperatures[i]);
                idx.push(i);
            }
        }
        return(ans);
    }
};
