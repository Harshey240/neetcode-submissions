class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size()-1;
        int mn = nums[0];
        int m;
        while(l<=r)
        {            
            m=(l+r)/2;
            if( nums[m]>=nums[l] && nums[m]>nums[r])
            {
                l = m+1;
            }
            else
            {
                r = m-1;
            }
            mn = min(mn,nums[m]);
        }
        return(mn);
    }
};
