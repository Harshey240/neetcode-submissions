// Hash map

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> ps;
        ps[0] = 1;
        int ans = 0;
        int currsum = 0;
        for(int n: nums)
        {
            currsum += n;
            ans += ps[currsum-k];
            ps[currsum]++;
        }
        return(ans);
    }
};