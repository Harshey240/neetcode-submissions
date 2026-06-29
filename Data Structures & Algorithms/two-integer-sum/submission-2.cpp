class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        unordered_map<int,int> um;
        vector<int> ans;
        for(int i=0;i<sz;i++)
        {
            int f = target - nums[i];
            if(um.find(f) == um.end())
            {
                um[nums[i]] = i;
            }
            else
            {
                ans = {um[f], i};
                return(ans);
            }
        }
        return(ans);
        
    }
};
