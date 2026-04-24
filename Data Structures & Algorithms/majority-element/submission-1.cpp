class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        int maxval = 0;
        int ans;
        for(const auto& pair : um )
        {
            if(pair.second > maxval)
            {
                maxval = pair.second;
                ans = pair.first;
            }
        }
        return(ans);
    }
};