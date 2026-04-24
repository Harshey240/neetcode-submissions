class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int sz = nums.size();
        int min = 0;
        int max = nums[sz-1] - nums[0];
        int mid, pairs;
        while(min<=max)
        {
            mid = (min+max)/2;
            pairs = 0;
            for(int i=0;i<sz-1;i++)
            {
                if(nums[i+1]-nums[i]<=mid)
                {
                    pairs++;
                    i++;
                }
            }
            cout<<pairs<<endl;
            if(pairs<p)
            {
                min = mid+1;
            }
            else
            {
                max = mid-1;
            }
        }
        if(pairs<p)
        {
            return(floor(mid)+1);
        }
        return(floor(mid));

    }
};