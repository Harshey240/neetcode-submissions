class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> mp(3,0);
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ptr = 0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<mp[i];j++)
            {
                nums[ptr] = i;
                ptr++;
            }
        }
    }
};