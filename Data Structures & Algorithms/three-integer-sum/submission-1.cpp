class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> temp;
            int l=i+1;
            int r = nums.size()-1;
            while(l<r)
            {
                if((nums[i]+nums[l]+nums[r])==0)
                {
                    temp = {nums[i],nums[l],nums[r]};
                    ans.push_back(temp);
                    l++;
                    r--;
                }
                else if((nums[i]+nums[l]+nums[r])<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        sort(ans.begin(),ans.end());
        auto it = unique(ans.begin(),ans.end());
        ans.erase(it,ans.end());
        return(ans);
    }
};
