class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int l = 0;
        int sz1 = strs.size();
        int sz2 = strs[0].size();
        
        for(int i=0;i<sz2;i++)
        {
            int temp = 1;
            char ch = strs[0][i];
            for(int j=1;j<sz1;j++)
            {
                if(strs[j][i] == ch)
                {
                    temp++;
                }
            }
            if(temp != sz1)
            {
                break;
            }
            else
            {
                ans += ch;
            }
        }
        return(ans);
    }
};