class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(ans.size()==k)
            {
                if(abs(ans[0] - x) > abs(arr[i]-x) )
                {
                    ans.erase(ans.begin());
                    ans.push_back(arr[i]);
                }
            }
            else
            {
                ans.push_back(arr[i]);
            }
        }
        return(ans);
    }
};