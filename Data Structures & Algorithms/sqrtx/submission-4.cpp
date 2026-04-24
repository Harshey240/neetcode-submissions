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
        long long sqr = (long long)m*m; 
        if(sqr>x)
        {
            return(m-1);
        }
        return(m);
    }
};