class Solution {
public:

    int robstraight(vector<int>& nums) {
        int sz = nums.size();
        vector<int> sum(sz+1);
        sum[0] = nums[0];
        sum[1] = nums[1];
        sum[2] = nums[2] + sum[0];

        if(sz == 1 )
        {
            return(sum[sz-1]);
        }

        for(int i=3;i<sz;i++)
        {
            sum[i] = nums[i] + max(sum[i-2], sum[i-3]);
        }

        return(max(sum[sz-1],sum[sz-2]));

    }

    int rob(vector<int>& nums) {

        int sz = nums.size();
        if(sz == 1)
        {
            return(nums[0]);
        }

        vector<int> nums1(nums.begin(), nums.end()-1);
        vector<int> nums2(nums.begin()+1, nums.end());

        return(max(robstraight(nums1), robstraight(nums2)));
        
    }
};
