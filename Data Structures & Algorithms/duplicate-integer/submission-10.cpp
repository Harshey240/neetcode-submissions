class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> temp;
        for(int i=0;i<n;i++)
        {
            temp[nums[i]]++;
            if( temp[nums[i]] > 1)
            {
                return(true);
            }
        }
        return(false);
    }
    
};