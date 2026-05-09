class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l,r;
        l=0;r=0;
        int sum = 0;
        int actualsum = sum;
        int ans = nums.size();
        while(r<nums.size())
        {
            sum += nums[r];
            if(sum>=target)
            {
                actualsum = sum;
                ans = min(ans,r-l+1);
                sum-=nums[l];
                sum-=nums[r];
                l++;                
                r--;
            }
            r++;
        }
        if(ans==nums.size() && actualsum<target)
        {
            return(0);
        }
        return(ans);
    }
};