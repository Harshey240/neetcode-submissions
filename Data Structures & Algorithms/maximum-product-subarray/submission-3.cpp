class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sz = nums.size();
        int currmax, currmin, maxprod;

        currmax = nums[0];
        currmin = nums[0];
        maxprod = nums[0];

        for(int i=1;i<sz;i++)
        {
            if(nums[i]==0)
            {
                currmax = 1;
                currmin = 1;
            }
            int temp = currmax;
            currmax = max({nums[i]*temp, nums[i]*currmin, nums[i]});
            currmin = min({nums[i]*temp, nums[i]*currmin, nums[i]});
            maxprod = max(maxprod, currmax);           
        }
        return(maxprod);
    }
};
