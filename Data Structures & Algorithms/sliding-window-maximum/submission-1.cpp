class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mx;

        for(int i=0;i<k;i++)
        {
            mx[nums[i]] = i;
        }
        // auto it = mx.rbegin();
        // int max = it->first;
        ans.push_back(mx.rbegin()->first);

        for(int i=k;i<nums.size();i++)
        {
            int past = i-k;
            if(mx[nums[i-k]]==(i-k))
            {
                mx.erase(nums[i-k]);
            }
            mx[nums[i]] = i;
            // auto it = mx.rbegin();
            // int max2 = it->first;
            ans.push_back(mx.rbegin()->first);      
        }
        return(ans);
    }
};
