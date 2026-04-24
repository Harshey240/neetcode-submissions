class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        vector<int> ans;
        for(int num: nums)
        {
            um[num]++;
        }
        int sz = nums.size()/3;
        for(const auto& pair : um)
        {
            if(pair.second>sz)
            {
                ans.push_back(pair.first);
            }
        }
        return(ans);
    }
};