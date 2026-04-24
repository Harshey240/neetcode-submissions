class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> um;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int c = target - nums[i];
            auto t = um.find(c);
            if(t != um.end())
            {
                ans = {t->second, i};
                break;
            }
            um.insert({nums[i], i});
        }
        return(ans);
    }
};
