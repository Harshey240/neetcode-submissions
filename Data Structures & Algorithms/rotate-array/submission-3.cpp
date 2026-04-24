class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        k=k%sz;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};