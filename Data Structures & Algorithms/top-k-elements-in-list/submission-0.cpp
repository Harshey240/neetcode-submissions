class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {      
        vector<int> ans;

        vector<vector<int>> temp(nums.size() + 1);

        unordered_map<int, int> um;
        for(int i=0;i<nums.size();i++)
        { 
            um[nums[i]]++;
        }

        for(const auto& pair : um)
        {
            temp[pair.second].push_back(pair.first);
        }

        int sz = temp.size();

        for(int i=temp.size()-1; i>=0; i--)
        {
            for(int n : temp[i])
            {
                if(ans.size()==k)
                {
                    break;
                }
                ans.push_back(n);
                
            }
        }
        return(ans);
    }
};
