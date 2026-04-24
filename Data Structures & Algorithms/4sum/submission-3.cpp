class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=(i+1);j<nums.size()-2;j++)
            {
                vector<int> temp;
                int l = j+1;
                int r = nums.size()-1;
                while(l<r)
                {
                    long long sum = (long long)(nums[i]+nums[j]+0LL+nums[l]+nums[r]);
                    if(sum==target)
                    {
                        temp = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(temp);
                        l++;
                        r--;
                    }
                    else if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        auto it = unique(ans.begin(),ans.end());
        ans.erase(it,ans.end());
        return(ans);
    }
};