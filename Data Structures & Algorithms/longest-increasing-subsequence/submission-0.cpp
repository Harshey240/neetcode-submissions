class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 1;
        vector<int> trk(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            int mx = 1;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    mx = max(mx, (1+trk[j]));
                }
            }
            trk[i] = mx;
            ans = max(mx, ans);
        }
        return(ans);
    }
};
