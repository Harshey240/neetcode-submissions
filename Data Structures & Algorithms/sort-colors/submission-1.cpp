class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> mp(3,0);        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.erase(nums.begin(),nums.end());

        for(int j=0;j<mp.size();j++)
        {
            for(int i=0;i<mp[j];i++)
            {
                nums.push_back(j);
            }
        }
    }
};