// Best solution using unordered set
// O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());

        int ans = 0;
        for(int n : nums)
        {
            if(st.find(n-1) == st.end())
            {
                int sz = 1;

                while(st.find(n+sz) != st.end())
                {
                    sz++;
                }
                ans = max(ans, sz);
            }            
        }
        return(ans);
    }
};
