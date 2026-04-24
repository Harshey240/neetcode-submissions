class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // int clubs = ceil(double(weights.size())/days);
        // int extra = weights%days;
        // int minclub = weights/days;

        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(),weights.end(),0);

        int m,d;
        while(l<=r)
        {
            m = (l+r)/2;
            d = 0;
            int sum = 0;
            for(int i=0;i<weights.size();i++)
            {
                sum+= weights[i];
                if(sum>m)
                {
                    d++;
                    i--;
                    sum = 0;
                }
            }
            if(sum != 0)
            {
                d++;
            }
            cout<<"l: "<<l<<", r: "<<r<<endl;
            cout<<"m: "<<m<<endl;
            cout<<"d: "<<d<<endl;

            if(d>days)
            {
                l = m+1;
            }
            else 
            {
                r = m-1;
            }
        }
        if(d>days)
        {
            return(m+1);
        }

        return(m);
        


    }
};