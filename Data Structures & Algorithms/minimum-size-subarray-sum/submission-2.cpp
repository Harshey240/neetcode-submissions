class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;

        int ans = nums.size();
        int tempsum = 0;
        int actualsum = 0;
        while(r<nums.size())
        {
            actualsum += nums[r];
            cout<<l<<r<<endl;
            tempsum += nums[r];
            if(tempsum>=target)
            {
                ans = min(ans, (r-l+1));
                tempsum -= nums[l];
                tempsum -= nums[r];
                l++;
                r--;
            }
            cout<<tempsum<<endl;
            cout<<ans<<endl<<endl;
            r++;
        }

        if(actualsum < target)
        {
            return(0);
        }

        return(ans);

    }
};