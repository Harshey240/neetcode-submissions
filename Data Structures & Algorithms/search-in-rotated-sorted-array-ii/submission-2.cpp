class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        bool ans = false;
        int m;
        while(l<=r)
        {                      
            m=(l+r)/2;
            cout<<"l: "<<l<<", m: "<<m<<endl; 
            if(nums[m]==target)
            {
                return(true);
            }
            if(m!=l && nums[m]==nums[l])
            {
                for(int ii=l;ii<m;ii++)
                {
                    if(target==nums[ii])
                    {
                        return(true);
                    }
                }
                l=m+1;
                continue;
            }
            if(nums[m]>=nums[l])
            {
                if(target>nums[m] || target<nums[l])
                {
                    l=m+1;
                }
                else if(target<nums[m] && target>=nums[l])
                {
                    r=m-1;
                }
            }
            else if(nums[m]<nums[l])
            {
                if(target<nums[m] || target>=nums[l])
                {
                    r=m-1;
                }
                else if(target>nums[m] && target<nums[l])
                {
                    l=m+1;
                }
            }
        }
        return(ans);
    }
};
