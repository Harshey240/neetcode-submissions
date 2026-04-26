class Solution {
public:
    int compress(vector<char>& chars) {
        int sz = chars.size();
        int left = 0;
        vector<char> ans;
        int count = 1;
        for(int i=1;i<sz;i++)
        {
            if(chars[i]==chars[left])
            {
                count++;
            }
            else
            {
                if(count == 1)
                {
                    ans.push_back(chars[left]);
                    left = i;
                    count = 1;
                }
                else
                {
                    ans.push_back(chars[left]);
                    left = i;
                    string t = to_string(count);
                    for(int j=0;j<t.size();j++)
                    {
                        ans.push_back(t[j]);
                    }
                    count = 1;
                }
            } 
        }
        if(count == 1)
        {
            ans.push_back(chars[left]);
        }
        else
        {
            ans.push_back(chars[left]);
            string t = to_string(count);
            for(int j=0;j<t.size();j++)
            {
                ans.push_back(t[j]);
            }
        }
        chars=ans;
        return(ans.size());
    }
};