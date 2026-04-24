class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int r = 0;
        int ans = 0;
        string st;
        while(r<s.size())
        {        
            int idx = st.find(s[r]);   
            if(idx != string::npos)
            {              
                st.erase(0, idx+1);
                l += idx + 1;               
            }
            st += s[r];
            int sz = st.size();
            ans = max(ans,sz);
            cout << st <<endl;
            // cout<<sz<<ans<<endl;
            r++;
        }
        return(ans);
    }
};
