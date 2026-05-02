class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> um;
        for(int num: nums)
        {
            if(num>0)
            {
                um[num]=1;
            }
        }
        int index = 1;
        for(const auto&pair: um)
        {
            if(pair.first != index)
            {
                return(index);
            }
            index++;
        }
        return(index);
    }
};