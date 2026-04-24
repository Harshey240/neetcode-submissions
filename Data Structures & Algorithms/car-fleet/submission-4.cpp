class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int,double> m;
        for(int i=0;i<speed.size();i++)
        {
            double time = double(target-position[i])/speed[i];
            m[position[i]] = time;
        }

        stack<double> s;
        int ans = 0;
        double current;

        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            if(ans == 0)
            {
                current = it->second;
                ans++;
            }
            else
            {
                if(it->second>current)
                {
                    current = it->second;
                    ans++;
                }
            }            
        }

        // for(const auto& pair: m)
        // {
        //     if(s.empty())
        //     {
        //         s.push(pair.second);
        //     }
        //     else
        //     {
        //         if(pair.second>=s.top())
        //         {
        //             s.pop();                    
        //         }
        //         s.push(pair.second);
        //     }
        // }

        // int ans = s.size();
        return(ans);

    }
};
