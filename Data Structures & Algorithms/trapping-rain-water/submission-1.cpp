class Solution {
public:
    int trap(vector<int>& height) {
        int gmi = 0;
        int max = 0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>max)
            {
                max=height[i];
                gmi = i;
            }
        }

        int ans = 0;

        int l = 0;
        int r = 1;        
        int product = 0;
        while(r<=gmi)
        {
            if(height[r]<height[l])
            {                
                product += height[l]-height[r];
                r++;
            }
            else if(height[r]>=height[l])
            {
                ans+= product;
                product = 0;
                l = r;
                r = l+1;
            }
        }

        cout<<gmi;

        l = gmi;
        r = gmi+1;        
        product = 0;
        
        reverse(height.begin()+gmi,height.end());
        while(r<height.size())
        {
            if(height[r]<height[l])
            {                
                product += height[l]-height[r];
                r++;
            }
            else if(height[r]>=height[l])
            {
                ans+= product;
                product = 0;
                l = r;
                r = l+1;
            }
        }
        return(ans);
    }
};
