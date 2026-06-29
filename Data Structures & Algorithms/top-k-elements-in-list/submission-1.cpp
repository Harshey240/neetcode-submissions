class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        vector<vector<int>> rev(nums.size()+1);
        for(const auto& pair : um)
        {
            rev[pair.second].push_back(pair.first);
        }

        vector<int> ans;
        int count = 0;
        for(int i=rev.size()-1;i>=0;i--)
        {
            for(int j=0;j<rev[i].size();j++)
            {
                if(count == k)
                {
                    return(ans);
                }
                ans.push_back(rev[i][j]);
                count++;
            }
        }
        return(ans);

    }
};
