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
        int temp = 1;
        for(const auto&pair: um)
        {
            if(pair.first == index)
            {
                temp=index+1;
            }
            else
            {
                return(temp);
            }
            index++;
        }
        return(temp);
    }
};