class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s2 += tolower(s[i]);
            }
        }
        s = s2;
        reverse(s.begin(),s.end());
        if(s==s2)
        {
            return(true);
        }
        else
        {
            return(false);
        }
    }
};
