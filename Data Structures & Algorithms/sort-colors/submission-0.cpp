class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.erase(nums.begin(),nums.end());

        for(auto const& [key,val]: mp)
        {
            for(int i=0;i<val;i++)
            {
                nums.push_back(key);
            }
        }
    }
};