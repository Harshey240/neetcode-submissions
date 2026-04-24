class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        ans += char(strs.size());
        for(string s : strs)
        {
            ans += char(s.size());
                      
        }
        for(string s : strs)
        {
            ans += s;
        }
        return(ans);
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int sz = int(s[0]);
        int l = sz+1;
        for(int i=1;i<=sz;i++)
        {
            int r = l + int(s[i]) - 1;
            ans.push_back(s.substr(l,int(s[i])));
            l = r+1;
        }

        return(ans);
    }
};
