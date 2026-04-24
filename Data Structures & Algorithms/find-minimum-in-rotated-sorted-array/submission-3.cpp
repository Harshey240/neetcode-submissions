class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size()-1;
        if(r==1)
        {
            return(min(nums[0],nums[1]));
        }
        int mn = nums[0];
        int m;
        while(l<=r)
        {            
            m=(l+r)/2;
            cout<<"l: "<<l<<", m: "<<m<<", r: "<<r<<endl;
            if( nums[m]>=nums[l] && nums[m]>nums[r])
            {
                l = m+1;
            }
            else
            {
                r = m-1;
            }
            mn = min(mn,nums[m]);
            cout<<"nums[m]: "<<nums[m]<<endl;
            cout<<"m: "<<m<<endl;
            cout<<"mn: "<<mn<<endl;
            cout<<"l: "<<l<<", m: "<<m<<", r: "<<r<<endl<<endl;
        }
        return(mn);
    }
};
