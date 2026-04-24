class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int total = 1;
        int total2 = 1;
        int count = 0;
        for(int n : nums)
        {
            total *= n;
            if(n != 0)
            {
                total2 *= n;
            }
            else
            {
                count++;
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                ans[i] = total/nums[i];
            }
            else if(nums[i] == 0 && count == 1)
            {
                ans[i] = total2;
            }
            else
            {
                ans[i] = 0;
            }
        }

        return(ans);


    }
};
