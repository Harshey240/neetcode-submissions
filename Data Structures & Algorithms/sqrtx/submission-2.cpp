class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int m;
        while(l<=r)
        {
            m=(l+r)/2;
            long long sqr = (long long)m*m;
            cout<<"l: "<<l<<", m: "<<m<<", r: "<<r<<", sqr: "<<sqr<<endl;
            if(sqr==x)
            {
                return(m);
            }
            else if(sqr<x)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        int sqr = m*m;
        if(sqr>x)
        {
            return(m-1);
        }
        return(m);
    }
};