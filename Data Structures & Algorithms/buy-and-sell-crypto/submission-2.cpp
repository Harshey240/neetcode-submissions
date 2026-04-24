//Two pointers:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int ans = 0;
        for(int p:prices)
        {
            if(p<min)
            {
                min = p;
            }  
            ans = max(ans,p-min);
        }
        return(ans);
    }
};
