class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        int sz = cost.size();
        cost.push_back(0);
        vector<int> fincost(sz+1); 
        fincost[0] = cost[0];
        fincost[1] = cost[1];
        for(int i=2;i<=sz;i++)
        {
            fincost[i] = min( cost[i] + fincost[i-1], 
                              cost[i] + fincost[i-2] );
        
            cout<<i<<fincost[i]<<endl;
        }
        return(fincost[sz]);
    }
};
