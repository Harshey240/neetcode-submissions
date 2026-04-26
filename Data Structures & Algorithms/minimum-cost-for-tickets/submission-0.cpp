//min of 
//(cost_at(idx-1)+ costs[0]) or cost_at(idx-7) + costs[1] or cost_at(idx-30) + costs[2]
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> cst(days.back()+1,0);
        int temp = 0;
        int ptr = 0;
        for(int i=1;i<=days.back();i++)
        {
            if(i==days[ptr])
            {
                int a,b,c;
                if(i-1>=0)
                {
                    a = cst[i-1] + costs[0];
                }
                else
                {
                    a = costs[0];
                }

                if(i-7>=0)
                {
                    b = cst[i-7] + costs[1];
                }
                else
                {
                    b = costs[1];
                }

                if(i-30>=0)
                {
                    c = cst[i-30] + costs[2];
                }
                else
                {
                    c = costs[2];
                }
                temp = min({a,b,c});
                ptr++;
            }
            cst[i] = temp;
            cout<<i<<cst[i]<<endl;
        }
        return(cst.back());
    }
};