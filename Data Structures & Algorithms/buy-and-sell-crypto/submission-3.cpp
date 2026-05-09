class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min, mx;
        min = prices[0]; 
        mx = prices[0];
        int ans = 0;
        for(int p: prices)
        {
            if(p<min)
            {
                min = p;
                mx = p;
            }
            mx = max(p,mx);
            ans = max(ans, mx-min);
        }
        return(ans);
    }
};
