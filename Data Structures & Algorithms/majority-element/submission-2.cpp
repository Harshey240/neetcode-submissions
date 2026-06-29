class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        int mx = 0;
        int ans = 0;
        for(const auto& pair : um)
        {
            if(pair.second>mx)
            {
                mx = pair.second;
                ans = pair.first;
            }
        }
        return(ans);
    }
};