class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        cout<<max<<endl;

        int l = 1;
        int r = max;
        int m,hours;
        while(l<=r)
        {
            m = (l+r)/2;

            cout<<l<< " "<<m<< " "<<r<<endl;

            hours = 0;
            for(int i=0;i<piles.size();i++)
            {
                int x = ceil(double(piles[i])/m);
                hours += x;
                cout<<"x: "<<x<<endl;
                cout<<"hour: "<<i<<": "<<hours<<endl;
            }
            
            cout<<"Hours: "<<hours<<endl;

            if(hours<=h)
            {
                r = m-1;
            }
            else if(hours>h)
            {
                l = m+1;
            }

        }

        if(hours>h)
        {
            return(m+1);
        }
        else
        {
            return(m);
        }       
    }
};
